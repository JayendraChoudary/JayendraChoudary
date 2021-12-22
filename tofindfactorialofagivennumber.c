#include<stdio.h>
main()
{
	int n,fact=1,i=1;
	printf("Enter a number whose factorial has to be found:-");
	scanf("%d",&n);
	while(i<=n);
	{
		fact=fact*i;
		i=i+1;
	}
	printf("The Factorial Of The Number =%d",fact);
}
