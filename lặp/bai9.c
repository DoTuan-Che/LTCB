#include <stdio.h>
#include <stdlib.h>

int main()
{
    double i,n;
    double m = 1;
    double s = 0;

    scanf("%lf",&n);
    for ( i=1;i<=n;i++){
        m=m*i;
        s=s+1.0/m;
    }
    printf("%lf",s);
    return 0;
}
