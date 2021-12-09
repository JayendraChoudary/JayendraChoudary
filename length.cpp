#include<stdio.h>
#include<math.h>
main()
{
	float x1,x2,y1,y2,Len=0;
	printf("Enter the Co-ordinate point x1");
	scanf("%f",&x1);
	printf("Enter the Co-ordinate point y1");
	scanf("%f",&y1);
	printf("Enter the Co-ordinate point x2");
	scanf("%f",&x2);
	printf("Enter the Co-ordinate point y2");
	scanf("%f",&y2);
	Len=sqrt(x2-x1)*(x2-x1)+(y2-y1)*(y2-y1);
	printf("%f",Len);
}
