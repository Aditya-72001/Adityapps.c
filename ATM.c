#include<stdio.h>
int main()
{
	int i,pin;
	for(i=1;i<=3;i++)
	{
		printf("Enter pin \t:");
		scanf("%d",&pin);
		if(pin==1234)
		{
			printf("Collect your cash");
			break;
		}
		else if(i==3)
		{
			printf("Your card is block for 24 hours");
		}
		else
		{
			printf("Wrong pin try again\t");
		}
	}
	return 0;
}
