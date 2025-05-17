#include<stdio.h>
int main()
{
	int ang1,ang2,ang3,sum;
	printf("Enter 1st angle:-");
	scanf("%d",&ang1);
	printf("Enter 2nd angle:-");
	scanf("%d",&ang2);
	printf("Enter 3rd angle:-");
	scanf("%d",&ang3);
	sum=ang1+ang2+ang3;
	if(ang1==0||ang2==0||ang3==0)
	{
		printf("Triangle is not possible");
	}
	else if (sum==180)
	{
		printf("Triangle is possible");
	}
	return 0;
	
	
	
}
