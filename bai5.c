#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double a,b,c;
    scanf("%lf%lf%lf",&a,&b,&c);
    double delta;
    delta = b*b - 4*a*c;
    double x1,x2;
    if(a==0){
        if(b!=0){
            printf("x = %lf",(-c/b));

        }
        else{
            if(c!=0){
                printf("Pt vo nghiem");
            }
            else{
                printf("Pt vo so nghiem");
            }
        }
    }
    else{
        if(delta <0){
            printf("Pt vo ngiem");
        }
        else if (delta ==0 ){
            printf ("x = %lf", (-b/2*a));
        }
        else{
            x1 = (-b + sqrt(delta))/2*a;
            x2 = (-b - sqrt(delta))/2*a;
            printf("x1 = %lf\n",x1);
            printf("x2 = %lf\n",x2);
        }

    }


    return 0;
}
