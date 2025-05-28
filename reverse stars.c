#include<stdio.h>
int main()
{
	int i=1,j=1;
	for(i=5;i>0;i--)
	{
		for(j=1;j<=i;j++)
		{
			printf("*");
		}
		 printf("\n");
	}
	return 0;
}
