#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter side 1:");
	scanf("%d",&a);
	printf("Enter side 2:");
	scanf("%d",&b);
	printf("Enter side 3:");
	scanf("%d",&c);
	if (a<(a+b))
	{
		printf("Triangle is possible");
	}
	else
	{
		printf("Triangle is not possible");
	}
	return 0;
	
}
