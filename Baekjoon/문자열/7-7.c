#include <stdio.h>

int reverse(char res[]){
    int sum;
    sum = res[0] + (res[1] * 10) + (res[2] * 100);
    return (sum - 48 - 480 - 4800);
}

int main(void){
    int a, b;
    char s1[4];
    char s2[4];
    scanf("%s", s1);
    scanf("%s", s2);
    a = reverse(s1);
    b = reverse(s2);
    if(a < b){
        printf("%d", b);
    }else{
        printf("%d", a);
    }
}