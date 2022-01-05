#include<stdio.h>
int main()
{
	int i,j,digit;
	printf("Enter a Digit");
	scanf("%d",&digit);
	for(i=1;i<=digit;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("* ",j);
		}
		printf("\n");
	}
}
