#include <stdio.h>

int main() {
    int i, j;
    int z, x;

   
    printf("Nhap so hang va so cot cua ma tran: ");
    scanf("%d%d", &z, &x);

    int a[z][x], b[z][x], tich[z][x]; 

    
    printf("Nhap cac phan tu cua ma tran 1:\n");
    for(i = 0; i < z; i++) {
        for(j = 0; j < x; j++) {
            scanf("%d", &a[i][j]); 
        }
    }

   
    printf("Nhap cac phan tu cua ma tran 2:\n");
    for(i = 0; i < z; i++) {
        for(j = 0; j < x; j++) {
            scanf("%d", &b[i][j]); 
        }
    }

    
    for(i = 0; i < z; i++) {
        for(j = 0; j < x; j++) {
            tich[i][j] = a[i][j] * b[i][j];
        }
    }

    
    printf("Tich cua hai ma tran:\n");
    for(i = 0; i < z; i++) {
        for(j = 0; j < x; j++) {
            printf("%d ", tich[i][j]);
        }
        printf("\n");
    }

    return 0;
}
