#include <stdio.h>
#include <stdlib.h>

int main()
{
    double a1,a2,b1,b2,c1,c2;
    scanf("%lf%lf%lf%lf%lf%lf",&a1,&b1,&c1,&a2,&b2,&c2);
    double dinhthuc;
    dinhthuc = a1*b2-a2*b1;
    if(dinhthuc==0){
        if(a1*b2 == a2*b1 && c1*b2 == c2*b1){
            printf("he PT vo so nghiem");
        }
        else{
            printf("he Pt vo nghiem");
        }
    }
    else{
        printf("x = %lf\n",(c1*b2 - c2*b1)/dinhthuc);
        printf("y = %lf\n",(a1*c2 - a2*c1)/dinhthuc);
    }
    return 0;
}
