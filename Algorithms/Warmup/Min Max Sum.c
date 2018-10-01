#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

void miniMaxSum(int arr_size, int* arr) {
  long long  int i,j,sum,k=0,min,max;
        for(i=0;i<arr_size;i++)
        {
            sum=0;
            
            for(j=0;j<arr_size;j++)
            {
                if(j==k)
                continue;
                else
                    sum=sum+arr[j];
            }
            k++;
            if(i==0){
            min=sum;
            max=sum;
            }
            if(sum<min)
                min=sum;
            else if(sum>max)
                max=sum;
            else if(sum==min)
                continue;
            else
                continue;
        }
    printf("%lld %lld",min,max);
}

int main() {
    int *arr = malloc(sizeof(int) * 5);
    for (int arr_i = 0; arr_i < 5; arr_i++) {
       scanf("%i",&arr[arr_i]);
    }
    miniMaxSum(5, arr);
    return 0;
}
