#include <stdio.h>
#include <stdlib.h>

int main()
{
    double R;
    scanf("%lf",&R);
    if(R<=0){
        printf("error");
    }
    else{
    printf("S = %lf\n",4*3.14*R*R);
    printf("V = %lf\n",(4/3)*3.14*R*R*R);
    }
    return 0;
}
