#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int marsExploration(char* s) {
    int i,j=0,count=0;
    char o[10]="SOS";
        for(i=0;i<strlen(s);i++)
        {
            if(s[i]!=o[j])
            {
               // printf("%c %c\n",s[i],o[j]);
                count++;
            }
            if(j==2)
            {
                j=-1;
            }
            
            j++;
        }
    return count;
    
}

int main() {
    char* s = (char *)malloc(512000 * sizeof(char));
    scanf("%s", s);
    int result = marsExploration(s);
    printf("%d\n", result);
    return 0;
}
