#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    printf("a + b = %d\n",a+b);
    printf("a - b = %d\n",a-b);
    printf("a * b = %d\n",a*b);
    if (b==0){
        printf("a / b = infinity");
    }
    else{
        printf("a / b = %d",a/b);
    }

    return 0;
}
