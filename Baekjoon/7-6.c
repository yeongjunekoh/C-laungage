#include <stdio.h>

int main(void){
    char str[1000001] = { 0,};
    scanf("%[^\n]s", str);
    int count = 0;
    int empty = 0;

    for(int i = 0; i < 1000001; i++){
        if(str[i] == 0) break;
        if(str[i] != ' ') empty++;
        if(empty != 0 && str[i] == ' ') count++;
        if(empty != 0 && str[i] == ' ' && str[i-1] == ' ') count--;
        if(str[i + 1] == 0 && str[i] == ' ' && str[i - 1] != ' ') count--;
    }
    printf("%d", count + 1);
}
