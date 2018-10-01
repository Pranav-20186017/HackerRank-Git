#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

char* kangaroo(int x1, int v1, int x2, int v2) {
    int c1=x1,c2=x2,i,flag=0;
    for(i=1;i<10000;i++)
    {
        c1+=v1;
        c2+=v2;
        if(c1==c2)
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
        return "YES";
    else
        return "NO";
}    
       
int main() {
    int x1; 
    int v1; 
    int x2; 
    int v2; 
    scanf("%i %i %i %i", &x1, &v1, &x2, &v2);
    int result_size;
    char* result = kangaroo(x1, v1, x2, v2);
    printf("%s\n", result);
    return 0;
}
