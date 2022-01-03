#include<stdio.h>
main()
{
	int i=1,fact=1,n;
	printf("Enter a Number");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
		printf("%d",fact);
	}
}
