#include <stdio.h>
int main(){
    int n;
    printf("So phan tu trong mang:");
    scanf("%d",&n );
    int a[n];
    int i;
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        if(a[i]<0){
            a[i]=0;
        }
    }
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    return 0;
}