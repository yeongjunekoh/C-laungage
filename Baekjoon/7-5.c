#include <stdio.h>
#include <string.h>

int findout_max(int res[]){
    int Max = 0;
    for(int i = 0; i < 26; i++){
        if(res[i] >= Max){
            Max = res[i];
        }
    }
    return Max;
}

void findout_double(int res[],int Max){
    int count = 0;
    int n = 0;
    for(int i = 0; i < 26; i++){
        if(res[i] == Max){
            count++;
            n = i + 65;
        }
    }
    if(count > 1){
        printf("?");
    }else{
        printf("%c", n);
    }
}

int main(void){
    char s1[1000001] = {0,};
    scanf("%s", s1);
    int A[52];
    for(int i = 0; i < 26; i++){
        A[i] = 'A' + i;
    }
    for(int i = 0; i < 26; i++){
        A[i + 26] = 'a' + i;
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
    MAX = findout_max(res);
    findout_double(res, MAX);
}