#include<stdio.h>
main()
{
	float S1,S2,S3,S4,S5,Ave,Per,Total;
	printf("Enter The Marks Obtained In Maths=");
	scanf("%f",&S1);
	printf("Enter The Marks Obtained In English=");
	scanf("%f",&S2);
	printf("Enter The Marks Obtained In Chemistry=");
	scanf("%f",&S3);
	printf("Enter The Marks Obtained In Lang II=");
	scanf("%f",&S4);
	printf("Enter The Marks Obtained In Physics=");
	scanf("%f",&S5);
	Total=S1+S2+S3+S4+S5;
	Ave=Total/5;
	Per=(Total/500)*100;
	printf("Average=%f",Ave);
	printf("Percentage=%f",Per);
}
