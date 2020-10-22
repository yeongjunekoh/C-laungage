#include <stdio.h>

int d(int n){
    int count = 0;
    int k = 0;
    for(int i = 0; ; i++){
        k = n / 10;
        if(k < 1) break;
        count++;
    }
    int k = n;
    for(int i = 0; ; i++){
        if(count == 0) break;
        k = k/(10^count);
        n = n + k;
        count--;
    }
}

int main(void){
    int a[10000];
    for(int i = 0; i < 10000; i++){
        a[i] = i;
    }
    for(int i = 0; i < 10000; i++){
        
    }
}