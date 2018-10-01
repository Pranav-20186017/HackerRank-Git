#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int n,k,bill,i,sum=0,realbill;
        scanf("%d %d",&n,&k);
    int*l=(int*)malloc(n*sizeof(int));
        for(i=0;i<n;i++)
            scanf("%d",&l[i]);
        scanf("%d",&bill);
    for(i=0;i<n;i++)
    {
       if(i==k)
           continue;
        else
            sum+=l[i];
    }
    realbill=sum/2;
    if(bill==realbill)
        printf("Bon Appetit");
    else
        printf("%d",l[k]/2);
    return 0;
}
