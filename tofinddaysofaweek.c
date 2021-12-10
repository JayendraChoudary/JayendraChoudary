#include<stdio.h>
main()
{
	int A;
	printf("Enter Value of A To Display Days");
	scanf("%d",&A);
	switch(A)
	{
		case 1:
		printf("Sunday");
		break;
		case 2:
		printf("Monday");
		break;
		case 3:
		printf("Tuesday");
		break;
		case 4:
		printf("Wednesday");
		break;
		case 5:
		printf("Thursday");
		break;
		case 6:
		printf("Friday");
		break;
		case 7:
		printf("Saturday");
		break;
		default:
		printf("Enterd An In Valied Number");
	}
}
