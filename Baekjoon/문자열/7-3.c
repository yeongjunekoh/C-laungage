#include <stdio.h>
#include <string.h>

int main(void){
    char a[100] = {};
    //초기화를 안해주면 쓰레기 값이 나오는데 그게 랜덤이라서 비교연산자를 쓸 경우에 손해를 볼 수 있다.
    scanf("%s", a);
    char b[26];
    for(int i = 0; i < 26; i++){
        b[i] = 'a' + i;
    }
    int res[26];
    for(int i = 0; i < 26; i++){
        for(int j = 0; j < 100; j++){
            if (b[i] == a[j]){
                res[i] = j; 
                break;
            }
            else{
                res[i] = -1;
            }
        }
    }
    for(int i=0; i<25; i++){ 
        printf("%d ", res[i]);
    }
    printf("%d", res[25]);
}