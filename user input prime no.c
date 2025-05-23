#include<stdio.h>
int main()
{
	int i,num,check=0,rem;
	printf("Enter the number\t");
	scanf("%d",&num);
	for(i=2;i<num;i++)
	{
		rem=num%i;
		if(rem==0)
		{
			check=1;
			break;
		}
	}
	if (check==0)
	{
		printf("prime");
	}
	else
	{
		printf("not prime");
	}
	return 0;
}
