#include<stdio.h>
int main()
{
	int a,b,i,value;
	scanf("%d%d%d",&value,&a,&b);
	for(i=a;i<=b;i++)//
	{
		printf("%d * %d = %d\n",value,i,i*value);
	}
	return 0;
}














