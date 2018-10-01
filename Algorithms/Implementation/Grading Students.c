#include<stdio.h>
int main()
{
  int temp=0,k=0,ne=0;
  int rem=0;
  int diff=0;
  int i,j=0;
  int a[10000];
  int grades[10000];
  int grades_size;
  scanf("%d",&grades_size);
  for(i=0;i<grades_size;i++)
  {
	  scanf("%d",&grades[i]);
  }
  for(i=0;i<grades_size;i++){
  if(grades[i]<38)
  {
	  a[j]=grades[i];
	  j++;
  }
  if(grades[i]>=38&&grades[i]<=100)
  {
    rem=grades[i]%10;
    k=(grades[i]/10)*10;
    if(rem==0||rem==5)
    {
		a[j]=grades[i];
		j++;
	}
    else if(rem<5)
    {
      diff=5-rem;
      if(diff<3)
      {
        temp=diff+rem;
        ne=k+temp;
        a[j]=ne;
		j++;
      }
      else
      {
		  a[j]=grades[i];
		  j++;
	  }
    }
    else if(rem>5&&rem<=9)
    {
      diff=10-rem;
      if(diff<3)
      {
        temp=diff+rem;
        ne=k+temp;
        a[j]=ne;
		j++;
      }
      else{
      a[j]=grades[i];
	  j++;
	  }
    }
  }
}
for(j=0;j<grades_size;j++)
printf("%d\n",a[j]);

return 0;
  }
 