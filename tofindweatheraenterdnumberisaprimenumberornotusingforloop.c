#include<stdio.h>
main()
{
	int i,count=0,n;
	printf("Enter a Number");
	scanf("%d",&n);
	for(i=2;i<=n;i++)
	while(n<=n/2)
	{
		if(n%i==0)
		{
		count=1;
		break;
		}
		}
		if(count==0)
		printf("Entered number is a prime number%d",n);
		else
		printf("Entered number is not a prime number%d",n);
		}
	
