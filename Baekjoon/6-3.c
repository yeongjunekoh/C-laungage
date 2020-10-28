#include <stdio.h>

int han(int n){
    int count = 99;
    int a[3];
    for(int i = 100; i <= n; i++){
        int k = i;
        a[0] = k % 10;
        k = k / 10;
        a[1] = k % 10;
        k = k / 10;
        a[2] = k % 10;
        if(a[0] - a[1] == a[1] - a[2]) count++;
    }
    return count;
}

int main(void){
    int n;
    scanf("%d", &n);
    if(n<100){
        printf("%d",n);
    }
    int res;
    if(n>=100){
        if(n == 1000) n = 999;
        res = han(n);
        printf("%d", res);
    }
}