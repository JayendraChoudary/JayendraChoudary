#include<stdio.h>
main()
{
	float Base,Height,Are=0;
	printf("Enter the Base size of Triangle");
	scanf("%f",&Base);
	printf("Enter the Height of the trianglr");
	scanf("%f",&Height);
	Are=0.5*Base*Height;
	printf("Area of the Triangle=%f",Are);
}
