#include <stdio.h>

int check(char string[]){
    char res[101] = {0,};
    int k = 0;
    int count = 0;
    for(int i = 0; i < 101; i++){
        if(string[i] != string[i + 1]){
            res[k] = string[i];
            k++;
        }
    }
    for(int i = 0; i < 101; i++){
        if(res[i] == 0) break;
        for(int j = 0; j < 101; j++){
            if(res[j] == 0) break;
            if(res[j] == res[i] && j != i) {
                count = 1; 
                break;
            }
        }
    }
    if(count == 1) {
        return 0;
    }else
    {
        return 1;
    }
}

int main(void){
    int n = 0;
    scanf("%d", &n);
    int result = 0;
    
    for(int i = 0; i < n; i++){
        char string[101] = {0,};
        scanf("%s", string);
        result += check(string);
    }
    
    printf("%d", result);
}