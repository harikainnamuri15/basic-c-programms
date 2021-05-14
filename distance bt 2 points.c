#include<stdio.h>
int main()
{
	float x1,x2,x3,x4,D;
	printf("x1:");
	scanf("%f",&x1);
	printf("x2:");
	scanf("%f",&x2);
	printf("x3:");
	scanf("%f",&x3);
	printf("x4:");
	scanf("%f",&x4);
	D=((x2-x1)*(x2+x1))+((x4-x3)*(x3+x4));
	printf("%f",D);
	return 0;
}














