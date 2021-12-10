#include<stdio.h>
main()
{
	float R,area=0,perimeter=0;
	printf("Enter the Radius Of a circle=");
	scanf("%f",&R);
	area=3.14*R*R;
	printf("the Area of the Circle=%f\n",area);
	perimeter=2*3.14*R;
	printf("the perimeter of the circle=%f",perimeter);
}
