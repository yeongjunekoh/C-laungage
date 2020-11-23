#include <stdio.h>

int main(void){
    int t, k, n;
    int a[15][15] = {0,};

    for(int j = 0; j < 15; j++){
        a[0][j] = j;
    }
    for(int i = 1; i < 15; i++){
        for(int m = 1; m < 15; m++){
            for(int o = 0; o < m + 1; o++){
                a[i][m] += a[i - 1][o];
            }
        }
    }

    scanf("%d", &t);

    int res[t];

    for(int r = 0; r < t; r++){
        scanf("%d", &k);
        scanf("%d", &n);
        res[r] = a[k][n];
    }

    for(int i = 0; i < t; i++){
        printf("%d\n", res[i]);
    }
}