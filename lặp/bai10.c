#include <stdio.h>

int main() {
    long long c;
    long long a = 0;
    long long b = 1;
    long long d ;
    scanf("%lld", &c);
    for (int i = 2; i <= c; i++) {
            d = a + b;
            a = b;
            b = d;

    }
    if(c==1){
        d = 1;
    }
    if(c==0){
        d =0;
    }
    printf("%lld\n", d);

return 0;
}

