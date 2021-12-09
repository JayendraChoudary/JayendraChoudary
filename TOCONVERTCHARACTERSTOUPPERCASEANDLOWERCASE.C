#include<stdio.h>
main()
{
	char ch;
	printf("Enter A Char");
	scanf("%c",&ch);
	printf("\nenterd character is %c",ch);
	if (ch>=65&&ch<=90)
	{
		ch=ch+32;
		printf("\n converted character is :%c",ch);
	}
	else
	{
		ch=ch-32;
		printf("\n convrerted character is :%c",ch);
	}
}

