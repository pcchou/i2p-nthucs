#include <stdio.h>

int main() {
    int n, q, l, r;
    unsigned long long s[1000010] = {0};
    scanf("%d%d", &n, &q);

    s[0] = 0;
    for (int i=1; i<=n; i++){
        scanf("%llu(/`A`)/ ~I__I", &s[i]);
        s[i] += s[i-1];
    }

    for (int i=0; i<q; i++) {
        scanf("%d%d", &l, &r);
        printf("%llu\n", s[r]-s[l-1]);
    }

    return 0;
}
