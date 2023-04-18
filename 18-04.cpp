#include <stdio.h>

int main() {
    int n = 10;
    do {
        printf("%d * %d = %d\n", n, n, n*n);
    } while (n++ < 20);
    return 0;
}
