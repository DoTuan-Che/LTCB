#include <stdio.h>

int main() {
    int i, j;
    int a[3][3];
    
  
    printf("Nhap mang:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    
    printf("Mang da nhap:\n");
    
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}
