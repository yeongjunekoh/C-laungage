#include <stdio.h>
#include <math.h>

long long sum(int *a, int n){
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum += a[i];
    }
    return sum;
}