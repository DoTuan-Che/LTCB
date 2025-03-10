#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    int b;
    scanf("%d%d",&a,&b);
    int t;
    int c = a;
    int d = b;
    while (b != 0)
    {
        unsigned int t = b;
        b = a % b;
        a = t;
    }
    printf("UCLN = %d\n",a);
    printf("BCNN = %d",(c*d)/a);
    return 0;
}
