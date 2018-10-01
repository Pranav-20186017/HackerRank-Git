#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
#include <ctype.h>


char* caesarCipher(char* s, int k, int n) { 
    char* enc = (char *)malloc(512000 * sizeof(char));
      int i,j,v=0,p;
      for(i=0;i<n;i++)
      {
          p=((int)s[i])+k;
        if((s[i]>=33)&&(s[i]<=64)||(s[i]>=91)&&(s[i]<=96)||(s[i]>=123)&&(s[i]<=126))
        {
          enc[v]=s[i];
          v++;
        }
        else if((s[i]>=65)&&(s[i]<=90))
        {
        while(p>90)
          p-=26;
        enc[v]=(char)p;
        v++;
        }
        else
        {
           while(p>122)
          p-=26;
        enc[v]=(char)p;
        v++;
        }
      }
  return enc;
}

int main() {
    int n; 
    scanf("%i", &n);
    char* s = (char *)malloc(512000 * sizeof(char));
    scanf("%s", s);
    int k; 
    scanf("%i", &k);
    int result_size;
    char* result = caesarCipher(s, k, n);
    printf("%s\n", result);
    return 0;
}
