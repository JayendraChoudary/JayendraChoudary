#include<stdio.h>
int main()
{
	int n,d,r=0;
	scanf("%d",&n);
	do
	{
		d=n%10;
		r=r*10+d;
		n=n/10;
	}
	while(n>0);
printf("%d",r);
}
