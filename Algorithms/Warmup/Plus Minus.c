#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

void plusMinus(int arr_size, int* arr) {
    int counter;
    float p=0,n=0,z=0;
    float size=arr_size;
    for(counter=0;counter<size;counter++)
    {
        if(arr[counter]<0)
            n++;
        else if(arr[counter]==0)
            z++;
        else 
            p++;
    }

    printf("%f\n",p/size);
    printf("%f\n",n/size);
    printf("%f\n",z/size);
    
}

int main() {
    int n; 
    scanf("%i", &n);
    int *arr = malloc(sizeof(int) * n);
    for (int arr_i = 0; arr_i < n; arr_i++) {
       scanf("%i",&arr[arr_i]);
    }
    plusMinus(n, arr);
    return 0;
}
