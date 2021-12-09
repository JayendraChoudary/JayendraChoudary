#include<stdio.h>
#include<math.h>
main()
{
	int num1,num2,maxi;
	printf("Enter 2 Number");
	scanf("%d%d",&num1,&num2);
	maxi=(num1>num2) ? num1:num2;
	printf("maximum between %d and %d is %d",num1,num2,maxi);
	
}


