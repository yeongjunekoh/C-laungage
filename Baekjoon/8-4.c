#include <stdio.h>

int main(void){
    int number = 0;
    scanf("%d", &number);
    int a, b;
    int count = 0;

    for(int n = 1; ; n++){
        if(number <= n){
            a = number;
            b = n - number + 1;
            break;
        }else{
            number -= n;
            count++;
        }
    }
    if((count % 2) == 0){
        printf("%d/%d", b, a);
    }else{
        printf("%d/%d", a, b);
    }
}