#include <stdio.h>
#include <stdlib.h>

int main()
{
    int d,m,y;
    int nhuan;
    int max_day;

    scanf("%d%d",&m,&y);
    if(y<0)
    {
        printf("%d/%d/%d: error",d,m,y);
    }
    else
    {
        if(y%400==0||(y%4==0&&y%100!=0) )
        {
            nhuan =1;
        }
        else
        {
            nhuan =0;
        }
        switch(m)
        {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            max_day=31;
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            max_day=30;
            break;
        }
        if(nhuan==1&&m==2)
        {
            max_day=29;
        }
        if(nhuan==0&&m==2)
        {
            max_day=28;
        }
        if(m<=12&&m>0&&d>0)
        {
            printf("Thang %d Nam %d co %d ngay",m,y,max_day);
        }
        else
        {
            printf("%d/%d/%d: error",d,m,y);
        }



    }
    return 0;
}
