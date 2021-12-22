#include<stdio.h>
main()
{
	int n,i=1,count=0;
	printf("\nEnter the value of N");
	scanf("%d",&n);
	while(i<=n);
	{
		if(n%1==0)
		count++;
		i++;
	}
	if(count==2)
	printf("\nit is a prime number");
	else
	printf("\nnot a prime number");
}
