#include <stdio.h>
#include <string.h>

int main() {
    char S[1002], s[1002];
    int t, N, n;
    scanf("%s\n%s\n", S, s);
    scanf("%d", &t);

    N = strlen(S);
    n = strlen(s);

    int cnt[1002] = {0};

    for (int l = 0; l <= N - n; l++) {
        if (l)
            cnt[l] = cnt[l-1];

        if (strncmp(&S[l], s, n) == 0)
            cnt[l]++;
    }

    while (t--) {
        int l, r;
        scanf("%d%d", &l, &r);
        l--; r--;

        if (r-l +1 < n) {
            printf("0\n");
            continue;
        }
        if (l == 0) {
            printf("%d\n", cnt[r-n+1]);
            continue;
        }
        printf("%d\n", cnt[r-n+1] - cnt[l-1]);
    }


    return 0;
}
