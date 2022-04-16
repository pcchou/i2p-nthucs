#include <stdio.h>
#include <string.h>

char a[1002], b[1002];

int check(char * A, char * B, int len) {
    if (len % 2 == 0)
        if (check(A, B+len/2, len/2) && check(A+len/2, B, len/2))
            return 1;

    return strncmp(A, B, len) == 0;
}

int main() {
    scanf("%s%s", a, b);
    int len = strlen(a);

    printf("%s\n", check(a, b, len) ? "YES" : "NO");

    return 0;
}
