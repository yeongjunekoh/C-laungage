#include <stdio.h>

int main(void){
    int count = 0;
    scanf("%d",&count);
    int num = 0;
    for(int j = 0; j < count; j++){
        scanf("%d", &num);
        int score[1000];
        int sum = 0;
        double average = .0;

        for(int i = 0; i < num; i++){
            scanf("%d", &score[i]);
            sum = sum + score[i];
        }
        average = (double)sum/num;
        int over = 0;
        for(int k = 0;  k < num; k++){
            if(score[k] > average){
                over++;
            }
        }
        printf("%.3f%%\n", (double) over * 100 / num);
    }

    return 0;
}