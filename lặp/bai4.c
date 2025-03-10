#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    int s= 0;
    for(i=1;i<=100;i+=2){
        s=s+i;
    }
    printf("%d",s);
    return 0;
}
