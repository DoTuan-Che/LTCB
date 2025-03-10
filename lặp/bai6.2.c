#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,i;
    int s= 0;
    scanf("%d",&a);
    for ( i=1;i<=a;i++){
        if(a%i==0){
            s=s+i;
        }
    }
    if (s == 2*a){
        printf("So hoan hao");
    }
    else{
        printf("So khong hoan hao");
    }

    return 0;
}
