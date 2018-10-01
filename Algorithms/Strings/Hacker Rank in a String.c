#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

char* hackerrankInString(char* s) {
    int i,n=0,j,count=0;
    char h[20]="hackerrank";
    for(i=0;i<strlen(h);i++)
    {
        for(j=n;j<strlen(s);j++)
        {
            if(h[i]==s[j])
            {
                n=j+1;
               /*if(n>strlen(s))
                    return "NO";
                else
                    break;*/
                count++;
                break;
            }
        }
    }
    if(count==strlen(h))
        return "YES";
    else
        return "NO";
}

int main() {
    int q; 
    scanf("%i", &q);
    for(int a0 = 0; a0 < q; a0++){
        char* s = (char *)malloc(512000 * sizeof(char));
        scanf("%s", s);
        int result_size;
        char* result = hackerrankInString(s);
        printf("%s\n", result);
    }
    return 0;
}
