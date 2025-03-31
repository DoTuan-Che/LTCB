#include <stdio.h>

void a(int n) {
    if (n > 1) {
        a(n / 2);
    }
    printf("%d", n % 2);
}

int main() {
    int n;
    scanf("%d", &n);
    a(n);
    printf("\n");
    printf("%o\n", n);
    printf("%X\n", n);

    return 0;
}
