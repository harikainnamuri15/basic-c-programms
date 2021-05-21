#include<stdio.h>
int main()
{
	int i,n,sum=0;
	printf("enter the value:");
	scanf("%d",&n);
	for(i=1;i<n;i++)
	{
		if(n%i==0)
		{
			sum=sum+i;
		}
	}
	if(n==sum)
	{
		printf("perfect number");
	}
	else
	{
		printf("not a perfect number");
	}
	return 0;
}
/*perfect number:sum of factors of a given number is equal to
the same number except itself*/












