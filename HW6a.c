#include <stdio.h>

int n, k;
int a[21];

int ways(int i, int sum, int depth) {
    //for (int r=0; r < depth; r++)
    //    printf(" ");
    //printf("i=%d, sum=%d\n", i, sum);

    if (sum == k)
        return 1;
    if (i == n || sum > k)
        return 0;

    return ways(i+1, sum+a[i], depth+1) + ways(i+1, sum, depth+1);
}

int main() {
    scanf("%d%d", &n, &k);
    for (int i = 0 ; i < n; i++)
        scanf("%d", &a[i]);

    printf("%d\n", ways(0, 0, 0));

    return 0;
}
