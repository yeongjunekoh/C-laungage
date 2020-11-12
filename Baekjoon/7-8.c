#include <stdio.h>

int main(void){
    char string[16];
    scanf("%s", string);
    int res = 0;
    
    for(int i = 0; i < 16; i++){
        if(string[i] >= 'A' && string[i] <= 'C'){
            res = res + 3;
        }
        if(string[i] >= 'D' && string[i] <= 'F'){
            res = res + 4;
        }
        if(string[i] >= 'G' && string[i] <= 'I'){
            res = res + 5;
        }
        if(string[i] >= 'J' && string[i] <= 'L'){
            res = res + 6;
        }
        if(string[i] >= 'M' && string[i] <= 'O'){
            res = res + 7;
        }
        if(string[i] >= 'P' && string[i] <= 'S'){
            res = res + 8;
        }
        if(string[i] >= 'T' && string[i] <= 'V'){
            res = res + 9;
        }
        if(string[i] >= 'W' && string[i] <= 'Z'){
            res = res + 10;
        }
    }

    printf("%d", res);
}