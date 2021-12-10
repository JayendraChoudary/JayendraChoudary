#include<stdio.h>
#include<math.h>
main()
{
	int A,B,X=0;
	char C;
	printf("Enter the Value of A");
	scanf("%d",&A);
	printf("Enter the Value of B");
	scanf("%d",&B);
	printf("Enter the Symbol");
	scanf("%c",&C);
	switch(C)
	{
		case '+':
			X=A+B;
		printf("The Value is %d",X);
		break;
		case '-':
			X=A-B;
		printf("The Value is %d",X);
		break;
		default:
			printf("Enter a Valied Symbol");
		
	}
}
