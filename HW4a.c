#include <stdio.h>
#include <string.h>
#include <assert.h>

#define debug 1
#define DBG(x) if (debug)
#define ll long long
#define min(x, y) ((x > y) ? y : x)
#define max(x, y) ((x > y) ? x : y)

int a[1000010] = {0};

ll s[1000010] = {0};

int main() {
    int n, q;

    scanf("%d%d", &n, &q);

    int piv = n+1;
    for (int i=1; i<=n; i++) {
        scanf("%d", &a[i]);
        s[i] = s[i-1] + a[i];
        if (a[i] <= 0)
            piv = min(i, piv);
    }

    while (q--) {
        int l, r, m;
        scanf("%d%d%d", &l, &r, &m);
        //printf("%d %d\n", min(l+m-1, min(r, piv-1)), min(l-1, piv-1));
        printf("%lld\n", s[min(l+m-1, min(r, piv-1))] - s[min(l-1, piv-1)]);
    }

    return 0;
}
