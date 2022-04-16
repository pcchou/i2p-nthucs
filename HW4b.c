#include <stdio.h>

#define debug 1
#define DBG(x) if (debug)
#define ll long long
#define INF 0x7fffffff

int dcnt(int l, int d) {
    int E = 1;
    for (int i=0; i<d; i++)
        E *= 10;

    int r = l % E;
    int x = (l/E) % 10;

    int floor = l - (l % (E*10));
    int ceil = floor + E*10;
    //printf(":%d, %d, %d\n", x, floor, ceil);

    if (x == 0)
        return floor / 10;

    if (x == 1)
        return (floor / 10) + r + 1;

    return ceil / 10;
}

int count(int l) {
    int n = 0, cnt = 0;

    int x = l;
    while (x > 0) {
        x /= 10;
        n++;
    }

    for (int i=0; i<n; i++) {
        int k = dcnt(l, i);
        //printf("i (%d): %d\n", i, k);
        cnt += k;
    }

    return cnt;
}

int main() {
    int t, a, b;

    scanf("%d", &t);

    while (t--) {
        scanf("%d%d", &a, &b);

        //scanf("%d", &a);
        printf("%d\n", count(b) - count(a-1));
    }

    return 0;
}
