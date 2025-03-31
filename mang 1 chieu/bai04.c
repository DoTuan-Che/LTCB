#include <stdio.h>

int main() {
    int n;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);
    
    int a[n];  
    int max, min, z = 0, x = 0; 
    
  
    for(int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        
        if (i == 0) {
            max = min = a[i]; 
        }
        
        if (a[i] > max) {
            max = a[i];
            z = i;  
        }
        
        if (a[i] < min) {
            min = a[i];
            x = i; 
        }
    }
    

    printf("Max = %d, vi tri: %d\n", max, z+1);
    printf("Min = %d, vi tri: %d\n", min, x+1);
    
    return 0;
}
