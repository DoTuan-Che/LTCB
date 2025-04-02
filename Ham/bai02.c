#include <stdio.h>
void tran(int n){
    int i;
    int t=1;
    for(i=1;i<=n;i++){
        t = t*i;
    }
    printf("%d",t);
}
int main(){
    int a;
    scanf("%d",&a);
    tran(a);
    return 0;
}