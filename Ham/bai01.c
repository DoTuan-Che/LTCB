#include <stdio.h>
#include <math.h>
void abc(int x,int y){
    int m = pow(x,y);
    printf("%d",m);
}
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    abc(a,b);
    return 0;
}