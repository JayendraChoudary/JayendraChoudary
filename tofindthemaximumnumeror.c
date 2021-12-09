#include<stdio.h>
main()
{
	int A,B,C;
	printf("Enter Numbers A");
	scanf("%d",&A);
	printf("Enter Number B");
	scanf("%d",&B);
	printf("Enter Number C");
	scanf("%d",&C);
	if (A<B&&A<C)
	{
		printf("The Smallest Number Is A : %d",A);
	}
    else if (B<C&&B<A)
	{
		printf("The Smallest Number Is B : %d",B);
	}
	else
	{
		printf("The Smallest Number Is C : %d",C);
	}
}
