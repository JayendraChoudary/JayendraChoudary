#include<stdio.h>
main()
{
	float P,T,R,SI=0;
	printf("Enter the principal amount=");
	scanf("%f",&P);
	printf("Enter the Time of Tenure=");
	scanf("%f",&T);
	printf("Enter the Rate of interst=");
	scanf("%f",&R);
	SI=P*T*R/100;
	printf("The Simple Interst of the amount Entered=%f",SI);
}
