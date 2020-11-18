#include <stdio.h>

int main(void){
    int s = 0;
    scanf("%d",&s);
    int k = 1;
    int res = 0;

    for(int n = 0; ; n++){
        k = (6 * n) + k;
        if(s <= k){
            res = n + 1;
            break;
        }
    }

    printf("%d", res);
}