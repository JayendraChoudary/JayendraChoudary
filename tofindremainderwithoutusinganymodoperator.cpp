#include<stdio.h>
main()
{
	int a,b,rem;
	printf("Enter a Divident");
	scanf("%d",&a);
	printf("Enter a Divisior");
	scanf("%d",&b);
	rem=a-(a/b)*b;
	printf("The Remainder Is %d",rem);
}
