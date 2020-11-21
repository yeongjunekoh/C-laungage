#include <stdio.h>
#include <string.h>

int main(void){
    char string[101] = {0,};
    scanf("%s", string);
    int result = 0;
    
    for(int i = 0; i < 100; i++){
        if(string[i] == 0) break;


        if(string[i] == 'c'){
            if(string[i + 1] == '=') {
                result++;
                i++;
            }
            else if(string[i + 1] == '-'){ 
                result++; 
                i++;
            }else result++;

        }else if(string[i] == 'd'){
            if(string[i + 1] == 'z'){
                if(string[i + 2] == '='){
                    result++;
                    i += 2;
                }else result++;
            }else if(string[i + 1] == '-'){
                result++;
                i++;
            }else result++;

        }else if(string[i] == 'l' || string[i] == 'n'){
            if(string[i + 1] == 'j'){
                i++;
                result++;
            }else result++;

        }else if(string[i] == 's' || string[i] == 'z'){
            if(string[i + 1] == '='){
                i++;
                result++;
            }else result++;
        }else{ 
            result++;
        }
    }
    printf("%d",result);

}