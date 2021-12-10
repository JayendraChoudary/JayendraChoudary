#include<stdio.h>
main()
{
	float side,area=0,perimeter=0;
	printf("Enter the side of a Square");
	scanf("%f",&side);
	area=side*side;
	printf("The area of the Square=%f",area);
	perimeter=4*side;
	printf("The perimeter of the Square=%f",perimeter);
	
}
