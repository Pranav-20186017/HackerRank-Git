#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>


int main() {
    char* s = (char *)malloc(512000 * sizeof(char));
    scanf("%s", s);   
    int hr,min,i=0,rem;
    char as[100];
    s[0]= s[0]-'0';
    s[1]= s[1]-'0';
    hr=(10*s[0]+s[1]);
    min=(10* s[3])+s[4];
        char num[8];

    if(s[8]=='A')
    {
         
        if(hr==12)
        {
            printf("00");
            for(i=2;i<=7;i++)
                printf("%c",s[i]); 
        }
        else
        {
            printf("%d%d",s[0],s[1]);
        for(i=2;i<=7;i++)
             printf("%c",s[i]);
        }
    }
    else{
        if(hr==12)
            printf("%d",hr);
        else{
        hr=hr+12;
        printf("%d",hr);
        }
    for(i=2;i<=7;i++)
             printf("%c",s[i]);
    
    } 
    printf("%s\n", as);
    return 0;
}
