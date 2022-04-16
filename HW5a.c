#include <stdio.h>
#include <limits.h>

#define min(x, y) ((x > y) ? y : x)
#define max(x, y) ((x > y) ? x : y)

int main() {
    int t, n, m, k;

    scanf("%d", &t);
    while (t--) {
        scanf("%d%d%d", &n, &m, &k);

        int a[n], ans = -1;

        for (int i=0; i<n; i++)
            scanf("%d", &a[i]);

        k = min(k, m-1); // take m-1 as k if k very large

        for (int i = 0; i <= k; i++) {
            int x = INT_MAX;
            for (int j = 0; j <= (m - 1) - k; j++)
                x = min(x, max(a[ i+j ], a[ i + j + (n-m) ]));
            ans = max(ans, x);
        }

        printf("%d\n", ans);

    }
    return 0;
}
