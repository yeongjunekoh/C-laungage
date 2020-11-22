#include <stdio.h>

int main(void){
    int T;
    scanf("%d", &T);
    int a[T];

    for(int i = 0; i < T; i++){
        int H, W, N, X, Y;
        int result;
        scanf("%d", &H);
        scanf("%d", &W);
        scanf("%d", &N);
        X = N/H + 1;
        Y = N%H;
        if(N%H == 0){
            X = N/H;
            Y = H;
        }
        result = X + Y * 100;
        a[i] = result;
    }
    for(int i = 0; i < T; i++){
        printf("%d", a[i]);
        if(i == T - 1) break;
        printf("\n");
    }
}