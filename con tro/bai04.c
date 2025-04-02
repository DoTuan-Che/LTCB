#include <stdio.h>
int main(){
    int n;
    printf("nhap do lon mang:");
    scanf("%d",&n);
    int a[n];
    int i;
    int *p = a;
    printf("so phan tu trong mang:");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);

    }
    for (int i = 0; i < n - 1; i++) {
        for (int j = i+1; j < n ; j++) {
            if (*(a+i) > *(a+j)) {
                
                int t = *(a+i);
                *(a+i) = *(a+j);
                *(a+j) = t;
            }
        }
    }
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    return 0;
    
}