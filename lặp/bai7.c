#include <stdio.h>
#include <stdlib.h>

int main()
{
    double n;
    double i;
    double s= 0;
    scanf("%lf",&n);
    for(i=1;i<=n;i++){
        s = s + 1.0/i;
    }
    printf("%lf",s);
    return 0;
}
