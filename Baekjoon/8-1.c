#include <stdio.h>

int main(void){
    int a, b, c, res = 0;

    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    int k = c - b;
    
    if(k > 0){
        res = a/k;
        printf("%d",res + 1);
    }else{
        res = - 1;
        printf("%d", res);
    }
}
