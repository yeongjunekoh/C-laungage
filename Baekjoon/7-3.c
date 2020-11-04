#include <stdio.h>
#include <string.h>

int main(void){
    char a[100];
    scanf("%s", &a[100]);
    char b[26];
    for(int i = 0; i < 26; i++){
        b[i] = 'a' + i;
    }
    int res[26];
    for(int i = 0; i < 26; i++){
        for(int j = 0; j < 100; j++){
            if (b[i] == a[j]){
                res[i] = j; break;
            }
            else{
                res[i] = -1;
            }
        }
    }
    for(int i=0; i<26; i++){
        printf("%d ", res[i]);
    }
}