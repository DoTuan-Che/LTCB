#include <stdio.h>
void coso2(int n){
    int binary[32];
    int i=0;
    while (n > 0) {
        binary[i] = (n % 2) + '0'; 
        n = n / 2;
        i++;
    }
    for (int j = i - 1; j >= 0; j--) {
        printf("%c", binary[j]);
    }

}
void coso8(int m){
    printf("%o",m);
}
void coso16(int m){
    printf("%X",m);
}
int main(){
    int a;
    int z;
    printf("nhap so: ");
    scanf("%d",&z);
    printf("chuyen thanh he co so:");
    scanf("%d",&a);
    if(a==2){
        coso2(z);
    }
    else if(a==8){
        coso8(z);
    }
    else if(a==16){
        coso16(z);
    }
    else{
        printf("Error!");
    }
    return 0;
}