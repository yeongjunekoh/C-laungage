#include <stdio.h>

int main(void){
    int n;
    scanf("%d", &n);
    int a;
    int res = 0;

    for(int i = 0; i < n; i++){
        scanf("%1d",&a);
        res = res + a;
    }

    printf("%d",res);
}