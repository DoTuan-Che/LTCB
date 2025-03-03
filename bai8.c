#include <stdio.h>
#include <stdlib.h>

int main()
{
    double a,b,c;
    scanf("%lf%lf%lf",&a,&b,&c);
    if(a+b <c ||a+c < b || b+c<a ){
        printf("Khong phai tam giac");
    }
    else{
    if(a*a+b*b == c*c || a*a+c*c==b*b||b*b+c*c == a*a){
                printf("Tam giac vuong");
    }
    else if((a*a+b*b == c*c || a*a+c*c==b*b||b*b+c*c == a*a)&&(a==b||b==c||a==c)){
            printf("Tam giac vuong can");
    }
    else if((a==b)&&a!=c||(b==c)&&b!=a||(a==c)&&a!=b){
        printf("tam giac can");
    }
    else if(a==b&&b==c){
        printf("tam giac deu");
    }
    else{
        printf("tam giac thuong");
    }

    }
    return 0;
}
