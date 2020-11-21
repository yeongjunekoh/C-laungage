#include <stdio.h>
#include <string.h>

int main(void){
    int m;
    scanf("%d", &m);
    for(int k = 0; k < m; k++){
        int n;
        scanf("%d", &n);
        char s[21] = { 0,};
        scanf("%s", s);
        for(int i = 0; i < 20; i++){
            if(s[i] == 0) break;
            for(int j = 0; j < n; j++){
                printf("%c", s[i]);
            }
        }
        printf("\n");
    }
}
