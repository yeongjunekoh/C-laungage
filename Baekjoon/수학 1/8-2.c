#include <stdio.h>

int main(void){
    int n = 0;
    scanf("%d", &n);
    int m, k, res = 0;
    
    
    for(int i = 0; i < 1001; i++){
        k = n - (5 * i);
        if(k==0) {res = i; break;}
        if(k < 0) break;
        m = k%3;
        if(m==0){
            res = k/3 + i;
        }
    }
    if(res==0){
        res = -1;
    }

    printf("%d", res);
}