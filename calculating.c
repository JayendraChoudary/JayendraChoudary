#include<stdio.h>
#include<conio.h>
main()
{
	float x,y,z=0,;
	printf("Enter The Value of X=");
	scanf("%f",&x);
	printf("Enter the Value of Y=");
	scanf("%f",&y);
	z=sqrt(x*x+y*y)/x*x+1;
	printf("The Value of z=%f",z);
}
