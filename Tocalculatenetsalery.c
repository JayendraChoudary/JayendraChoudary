#include<stdio.h>
int main()
{
	int A,Basic,Hra,Pre,Net;
	scanf("%d",&A);
	Basic=A*10/100;
	Hra=A*20/100;
	Pre=A+Basic+Hra;
	Net=Pre-1000-500-1000;
	printf("%d",Net);
}
