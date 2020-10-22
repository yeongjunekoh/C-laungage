#include <stdio.h>

int d(int n){
    int count = 0;
    int k = 0;
    for(int i = 0; ; i++){
        k = n / 10;
        if(k < 1) break;
        count++;
    }
    k = n;
    for(int i = 0; ; i++){
        if(count == 0) break;
        k = k/(10^count);
        n = n + k;
        count--;
    }
    return n;
}

int main(void){
    int a[10000];
    for(int i = 0; i < 10000; i++){
        a[i] = i;
    }
    int n = 1;
    for(int i = 1; i < 10000; i++){
        for(int j = 1; ; j++){
            n = d(n);
            if(a[n] == n) a[n] = 0;
            if(n >= 10000) break;
        }
        n++;
    }
    for(int i = 0; i < 10000; i++){
        if(a[i] != 0) printf("%d\n", a[i]);
    }
}