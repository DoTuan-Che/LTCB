#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i;
    scanf("%d",&n);
    int s =0;
    int m=1;
    for(i=1;i<=n;i++){
        m = m*i;
        s = s+m;
    }
    printf("%d",s);
    return 0;
}
