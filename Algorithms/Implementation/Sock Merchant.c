#include<stdio.h>
int main()
{
	int a[1000];
	int t[1000];
	int c[1000];
	int i,j=0;
	int f=0;
	int temp;
	int n;
	int k=0;
	int len;
	int count=0;
	//printf("Enter No of Elements:");
	scanf("%d",&n);
	//printf("\nEnter Elements:");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	//printf("Sorting:");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	//printf("\nSorted Array:");
	for(i=0;i<n;i++)
	//	printf("\t%d",a[i]);
	//printf("\nUnique Elements:");
	for(i=0;i<n;i++)
	{
		while(i<n-1&&a[i]==a[i+1])
			i++;
	//	printf("\t%d",a[i]);
		t[j]=a[i];
		j++;
	}
	//printf("\nArray of Unique:");
	for(i=0;t[i]!='\0';i++)
	//	printf("%d",t[i]);
	for(len=0;t[len]!='\0';len++);
	for(i=0;i<len;i++)
	{
		count=0;
		for(j=0;j<n;j++)
		{
			if(t[i]==a[j])
				count++;
		}
		c[k]=count;
		k++;
	}
	//printf("\nCount:%d",count);
	
	for(k=0;c[k]!='\0';k++)
	{
		if(c[k]%2==0)
			f+=c[k]/2;
		else
			f+=(c[k]-1)/2;
	}
	printf("%d",f);
	return 0;
}