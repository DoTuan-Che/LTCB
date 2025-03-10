#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int x;
    scanf("%d",&x);
    int i;

    if(x%2==0&&x!=2){
        printf("Khong phai so nguyen to");
    }
    else if(x<2){
        printf("Khong phai so nguyen to");
    }
    else if(x==2){
        printf("La so nguyen to");
    }
    else{
        int b=1;
        for(i=3;i<x;i+=2){
            if(x%i==0){
                 b=0;
                break;
            }
        }
        if(b){
            printf("la so nguyen to");
        }
        else{
            printf("khong La so nguyen to");
        }
    }
    return 0;
}
