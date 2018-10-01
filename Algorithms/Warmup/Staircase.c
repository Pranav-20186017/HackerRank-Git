#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

void staircase(int n) {
    int count,count2,count3;
    for(count=0;count<n;count++)
    {
        for(count2=n-count;count2>1;count2--){
            printf(" ");
        }
        for(count3=0;count3<count+1;count3++)
        printf("#");
        printf("\n");
    }
}
int main() {
    int n; 
    scanf("%i", &n);
    staircase(n);
    return 0;
}
