#include<stdio.h>
main()
{
	int A,B,C;
	printf("Enter Three Numbers");
	scanf("%d",&A);
	scanf("%d",&B);
	scanf("%d",&C);
	switch(A>B && A>C)
	{
		case 1:
		printf("%dis a Maximum",A);
		break;
		case 0: switch(B>C)
		{
			case 1:printf("%d Is Maximum",B);
			case 2:printf("%d Is Maximum",C);
			
		}
		
		
	}
	
	
}
