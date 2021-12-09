#include<stdio.h>
#include<math.h>
main()
{
	float X,Y,Z=0;
	printf("Enter the value of x");
	scanf("%f",&X);
	printf("Enter the value of y");
	scanf("%f",&Y);
	Z=sqrt((X*X+Y*Y)/X*X+1);
	printf("The Calculated Given Sum Out put=%d",Z);
}
