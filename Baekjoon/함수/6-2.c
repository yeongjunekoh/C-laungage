#include <stdio.h>

int d(int n){
    int count = n;
    int k;
    while(n >= 1){
        k = n % 10;
        count = count + k;
        n = n / 10;
    }
    return count;
}

int main(void){
    int a[10000];
    for(int i = 0; i < 10000; i++){
        a[i] = i;
    }
    int n = 1;
    for(int i = 1; i < 10000; i++){
        n = i;
        while(n < 10000){
            int k = n;
            n = d(n);
            if(n >= 10000) break;
            if(k == n) break;
            if(a[n] == n) a[n] = 0;
        }
    }
    for(int i = 0; i < 10000; i++){
        if(a[i] != 0) printf("%d\n", a[i]);
    }
}