#include <stdio.h>

int main() {
    char c;
    while((c = getchar()) != EOF)
        printf("%c", c);
    return 0;
}
