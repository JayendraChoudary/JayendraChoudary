#include<stdio.h>
main()
{
	int n,i=1,count=0;
	printf("Enter a number :");
	scanf("%d",&n);
	while(i<=n);
	{
		if(n%1==0)
		count++;
		i++;
	}
	if(count<=2)
	printf("it is a prime number");
	else
	printf("not a prime number");
}
