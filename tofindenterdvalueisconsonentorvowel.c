#include<stdio.h>
main()
{
	char A;
	printf("Enter A Character");
	scanf("%c",&A);
	switch(A)
	{
		case 'A':
		case 'E':
		case 'I':
		case 'O':
		case 'U':
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
			printf("The Entered Character is a Vowel");
			break;
		default:
			printf("The Enterd Character is a Consonent");
	}
}
