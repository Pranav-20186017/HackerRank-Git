#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int birthdayCakeCandles(int n, int ar_size, int* ar) {
    long long int temp,count,i;
        for(i=0;i<ar_size;i++)
        {
            if(i==0){
                temp=ar[i];
                continue;
            }
            if(ar[i]>temp)
                temp=ar[i];
            else if(ar[i]==temp)
                continue;
            else
                continue;
            }
    for(i=0;i<ar_size;i++)
    {
        if(temp==ar[i])
            count++;
    }
    return (count-1);
}

int main() {
    int n; 
    scanf("%i", &n);
    int *ar = malloc(sizeof(int) * n);
    for(int ar_i = 0; ar_i < n; ar_i++){
       scanf("%i",&ar[ar_i]);
    }
    int result = birthdayCakeCandles(n, n, ar);
    printf("%d\n", result);
    return 0;
}
