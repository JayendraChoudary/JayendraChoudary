#include<stdio.h>
main()
{
	int i,sum=0,n,k,avg;
	printf("Enter how many numbers average");
	scanf("%d",&n);
	while(i<=n)
	{
		scanf("%d",&k);
		sum=sum+k;
		i++;
	}
	printf("sum is%d",sum);
	avg=(float)(sum/n);
	printf("Average is %d",avg);
}
