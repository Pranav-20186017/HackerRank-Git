#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int migratoryBirds(int n, int* ar) 
{
   int i;
     //int *q = malloc(sizeof(int) * 5);
    int q[5]={0,0,0,0,0};
     for(i=0;i<n;i++)
     {
       switch(ar[i])
       {
         case 1:
           q[0]++;
           break;
        case 2:
           q[1]++;
           break;
         case 3:
           q[2]++;
           break;
         case 4:
           q[3]++;
           break;
         case 5:
           q[4]++;
           break;
       }   
    }
  int max=q[0],k=0;
  for(i=0;i<5;i++)
    if(q[i]>max){
      max=q[i];
      k=i;
    }
  
  return k+1;
}

int main() {
    int n; 
    scanf("%i", &n);
    int *ar = malloc(sizeof(int) * n);
    for(int ar_i = 0; ar_i < n; ar_i++){
       scanf("%i",&ar[ar_i]);
    }
    int result = migratoryBirds(n, ar);
    printf("%d\n", result);
    return 0;
}
