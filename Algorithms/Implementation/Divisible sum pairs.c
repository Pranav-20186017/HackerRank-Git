#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int divisibleSumPairs(int n, int k, int ar_size, int* ar) 
{
    int count=0,j,i,l=n-1;
    for(i=0;i<ar_size;i++)
    {
      for(j=i+1;j<=l;j++)
      {
       // printf("%d  %d\n",2,j);
        if(((ar[i]+ar[j])%k)==0)
        {
          
          count++;
        }
      }
    }
  return count;
}

int main() {
    int n; 
    int k; 
    scanf("%i %i", &n, &k);
    int *ar = malloc(sizeof(int) * n);
    for(int ar_i = 0; ar_i < n; ar_i++){
       scanf("%i",&ar[ar_i]);
    }
    int result = divisibleSumPairs(n, k, n, ar);
    printf("%d\n", result);
    return 0;
}
