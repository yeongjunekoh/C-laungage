#include <stdio.h>

int main(void){
    int a, b, h;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &h);
    int res = 0;
    int k, m = 0;

    k = h / a;
    m = h;

    while(k>=1 && m != a){
        m = m - ((a- b) * k);
        res = res + k;
        k = m / a;
    }
    res = res + 1;

    printf("%d",res);
}