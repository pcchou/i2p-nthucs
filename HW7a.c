#include <stdio.h>
#include <stdlib.h>

#define max(x, y) ((x > y) ? x : y)

int gcd(int a, int b) {
    if (!a) return b;
    return gcd(b % a, a);
}

int icmp(const void *a, const void *b) {
   const int *A = a, *B = b;
   return (*A < *B) - (*A > *B);
}


int main() {
    int n, a[1001];
    scanf("%d", &n);
    for (int i=0; i<n; i++)
        scanf("%d", &a[i]);

    qsort(a, n, sizeof(int), icmp);

    int ans = 1;
    for (int i=0; i<n; i++) {
        for (int j=i+1; j<n; j++)
            ans = max(ans, gcd(a[i], a[j]));
        if (ans > a[i])
            break;
    }

    printf("%d\n", ans);

    return 0;
}
