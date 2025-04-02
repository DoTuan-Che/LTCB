#include <stdio.h>

int main() {
    int n;
    printf("Do lon mang: ");
    scanf("%d", &n);

    
    if (n <= 0) {
        printf("Kich thuoc mang khong hop le\n");
        return 1;
    }

    int a[n];
    int *p = a;
    int i;

    
    printf("Nhap phan tu trong mang: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    
    int max = a[0];
    int min = a[0];

    
    for(i = 1; i < n; i++) {  
        if (*(p + i) > max) {
            max = *(p + i); 
        }
        if (*(p + i) < min) {
            min = *(p + i);  
        }
    }

   
    printf("Max = %d, Min = %d\n", max, min);

    return 0;
}
