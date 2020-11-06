#include <stdio.h>
#include <string.h>

int Max(int res[]){
    int Max = 0;
    for(int i = 0; i < 26; i++){
        if(res[i] >= Max){
            Max = res[i];
        }
    }
    return Max;
}

char result(int res[],int Max){
    int count = 0;
    for(int i = 0; i < 26; i++){
        if(res[i] == Max){
            count++;
        }
    }
    if(count > 1){
        return '?';
    }else{
        return Max;
    }
}

int main(void){
    char s1[] = {0,};
    scanf("%s", s1);
    char A[52];
    for(int i = 0; i < 52; i++){
        A[i] = 'A' + i;
    }
    int res[52] = {0,};
    for(int i = 0; i < 52; i++){
        for(int j = 0; j < strlen(s1); j++){
            if(A[i] == s1[j]){
                res[i]++;
            }
        }
    }
    for(int i = 0; i < 26; i++){
        res[i] = res[i] + res[i + 26];
    }
    int MAX = 0;
    MAX = Max(res[26]);
    char res = 0;
    res = result(res[26], Max);

    printf("%c", res);
}