#include<stdio.h>
int main()
{
	int num,rem;
	printf("Enter number to check\t");
	scanf("%d",& num);
	rem=num%2;
	if(rem==0)
	{
		printf("Even");
	}
	else
	{
		printf("Odd");
	}
	return 0;
}
