#include <stdio.h>

int main() {
    int n, a[200010], q, piv = 0;
    scanf("%d", &n);

    for (int i=1; i<=n; i++) {
        scanf("%d", &q);
        a[q] = i;
    }

    for (int i=0; i<n; i++) {
        scanf("%d", &q);
        if (a[q] > piv) {
            printf("%d%c", a[q]-piv, (i<n-1)?' ':'\n');
            piv = a[q];
        } else {
            printf("0%c", (i<n-1)?' ':'\n');
        }
    }

    return 0;
}
