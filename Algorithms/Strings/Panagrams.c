#include <ctype.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* readline();
char* pangrams(char* s) {
    int i,j,k,a=0;
   char l[26]="abcdefghijklmnopqrstuvwxyz";
    for(i=0;s[i]!='\0';i++)
    {
        s[i]=tolower(s[i]);
    }
    for(i=0;i<26;i++)
    {
        for(j=0;j<strlen(s);j++)
        {
            if(s[j]==32)
                continue;
            if(l[i]==s[j]){
               // printf("%c",s[j]);
                a++;
                break;
            }       
        }    
    }
    if(a==26)
    return "pangram";
    else
        return "not pangram";
}

int main()
{
    FILE* fptr = fopen(getenv("OUTPUT_PATH"), "w");

    char* s = readline();

    char* result = pangrams(s);

    fprintf(fptr, "%s\n", result);

    fclose(fptr);

    return 0;
}

char* readline() {
    size_t alloc_length = 1024;
    size_t data_length = 0;
    char* data = malloc(alloc_length);

    while (true) {
        char* cursor = data + data_length;
        char* line = fgets(cursor, alloc_length - data_length, stdin);

        if (!line) { break; }

        data_length += strlen(cursor);

        if (data_length < alloc_length - 1 || data[data_length - 1] == '\n') { break; }

        size_t new_length = alloc_length << 1;
        data = realloc(data, new_length);

        if (!data) { break; }

        alloc_length = new_length;
    }

    if (data[data_length - 1] == '\n') {
        data[data_length - 1] = '\0';
    }

    data = realloc(data, data_length);

    return data;
}
