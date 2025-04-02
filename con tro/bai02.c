#include <stdio.h>

int main() {
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int *p = a;

    printf("Mảng số nguyên: ");

   
    for (int i = 0; i < 10; i++) {
        printf("%d ", *(p + i)); 
    }

    printf("\n");

    return 0;
}