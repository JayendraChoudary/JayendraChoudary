#include<stdio.h>
main()
{
	int X,Y;
	printf("Enter The Vlue of A");
	scanf("%d",&X);
	Y=X%2;
	switch(Y)
	{
		case 0:
			printf("Entered Value is An Even Number%d",X);
			break;
		case 1:
			printf("Entered Value is An Odd Number%d",X);
			break;
		default:
			printf("Entered Value is An Invalied");
		
	}
}
