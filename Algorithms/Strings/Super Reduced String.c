#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
void delete(char* s,int d1)
{
  if(strlen(s)==2){
  printf("Empty String");
  exit(0);
  }
    else{
  char* str=(char*)malloc(512000 * sizeof(char));
  int d2=d1+2;
  int i,j;
  i=0;
  for(j=0;j<d1;j++){
    str[i]=s[j];
    i++;
  }
  for(j=d2;j<strlen(s);j++)
  {
    str[i]=s[j];
    i++;
  }
  str[i]='\0';
  strcpy(s,str);
  //puts(s);
  //printf("%ld",strlen(s));
    }
}
int check(char* s)
{
  for(int i=0;i<strlen(s);i++)
  {
    if(s[i]==s[i+1])
      return 0;
  }
  return 1;
}
char* super_reduced_string(char* s){
     int i,j;
  for(i=0;i<strlen(s);i++)
      {
        if(s[i]==s[i+1])
        {
          delete(s,i);
          break;
        }
      }
   if(s[0]=='\0')
    return "Empty String";
 // printf("%ld",strlen(s));
  if(check(s)==0)
        super_reduced_string(s);
    return s;
}

int main() {
    char* s = (char *)malloc(512000 * sizeof(char));
    scanf("%s", s);
    int result_size;
    char* result = super_reduced_string(s);
    printf("%s\n", result);
    return 0;
}
