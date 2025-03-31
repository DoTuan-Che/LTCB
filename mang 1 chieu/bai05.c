#include <stdio.h>
int main(){
    
    int n;
    int i;
    printf("So phan tu trong mang:");
    scanf("%d",&n);
    int a[n];
    printf("Nhap so x:");
    int x;
    int dem=0;
    scanf("%d",&x);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        if(a[i]==x){
            dem++;
        }
    }
    printf("So x xuat hien %d lan trong mang ",dem);
    return 0;
}