#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int diagonalDifference(int a_size_rows, int a_size_cols, int a[][a_size_cols])
{
    int i,k=a_size_cols-1,psum=0,ssum=0,x;
    for(i=0;i<a_size_rows;i++)
    {
        psum+=a[i][i];
           ssum+=a[k][i];
        k--;
    }
    x=abs(psum-ssum);
    return x;   
}

int main() {
    int n; 
    scanf("%i", &n);
    int a[n][n];
    for (int a_i = 0; a_i < n; a_i++) {
       for (int a_j = 0; a_j < n; a_j++) {
      
          scanf("%i",&a[a_i][a_j]);
       }
    }
    int result = diagonalDifference(n, n, a);
    printf("%d\n", result);
    return 0;
}
