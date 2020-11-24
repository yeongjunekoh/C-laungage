#include <stdio.h>

int min(int x, int y){
    int k = 0, count = 0;
    k = y - x;
    for(int n = 1; ; n++){
        k = k - n;
        count ++;
        if(k == 0) break;
        if(k <= n){
            count++;
            break;
        }
        k = k - n;
        count++;
        if(k <= n + 1){
            count++;
            break;
        }
    }
    return count;
}

int main(void){
    int t, x, y;
    scanf("%d",&t);
    int res[t];

    for(int i = 0; i < t; i++){
        scanf("%d", &x);
        scanf("%d", &y);
        res[i] = min(x,y);
    }

    for(int i = 0; i < t - 1; i++){
        printf("%d\n", res[i]);
    }
    printf("%d", res[t - 1]);
}