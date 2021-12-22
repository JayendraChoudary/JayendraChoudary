#include<stdio.h>
main()
{
	int n,k,sum=0;
	printf("Enter Number Whose Sum Has To Be Found");
	scanf("%d",&n);
	while(n>0)
	{
		k=n%10;
		sum=sum+k;
		n=n/10;
	}
	printf("%d",sum);
}
