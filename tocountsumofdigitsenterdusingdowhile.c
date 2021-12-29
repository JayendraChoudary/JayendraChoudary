#include<stdio.h>
int main()
{
	int sum,n,k;
	scanf("%d",&n);
	do
	{
		k=n%10;
		sum=sum+k;
		n=n/10;
	}
	while(n>0);
	printf("%d",sum);
}
