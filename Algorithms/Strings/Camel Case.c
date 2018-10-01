#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int camelcase(char* s) {
    int count=1;
      for(int i=0;i<strlen(s);i++){
        if((int)s[i]<97)
          count++;
      }
  return count;
}

int main() {
    char* s = (char *)malloc(512000 * sizeof(char));
    scanf("%s", s);
    int result = camelcase(s);
    printf("%d\n", result);
    return 0;
}
