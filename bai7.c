#include <stdio.h>
#include <stdlib.h>

int main()
{
    double diem;
    scanf("%lf",&diem);
    if(diem<5){
        printf("Yeu");
    }
    else if(diem>=5 && diem<7){
        printf("Trung binh");
    }
    else if(diem >=7 && diem <8){
        printf("Kha");

    }

    else if(diem >=8 && diem <9){
            printf("gioi");
    }
    else if(diem >=9 ){
            printf("xuat Xac");
    }
    return 0;
}
