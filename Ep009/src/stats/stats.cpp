#include "supermath.h"

double mean(int *arr, int count){
    int sum = 0;
    for(int i = 0; i < count; i++){
        sum = add(sum, arr[i]); 
    }

    return (double)sum / count;
}