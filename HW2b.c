#include <stdio.h>

int main() {
    int x,y,z;
    scanf("%d%d%d", &x, &y, &z);
    printf("%d %d %d\n", x - (x-z+y)/2, (x-z+y)/2, y-(x-z+y)/2);
    return 0;
}
