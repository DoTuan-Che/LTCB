#include <stdio.h>
int main(){
    int a=10;
    int b=50;
    printf("%d %d\n",a,b);
    int *pA = &a;  
    int *pB = &b;  
    int *t;
    t=pA;
    pA=pB;
    pB=t;
    int temp = *pA; 
    *pA = *pB;       
    *pB = temp;
    printf("%d %d",a,b);

    return 0;




}