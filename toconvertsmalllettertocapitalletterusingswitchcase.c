#include<stdio.h>
main()
{
	char ch;
	printf("Enter a Character:-");
	scanf("%c",ch);
	switch(ch>=65&&ch<=99)
	{
		case 1:
			{
				ch=ch+32;
				printf("The Converted Character is:-%c",ch);
				break;
		case 0:switch(ch>=97&&ch<=122)
			    {
			    	case 1:
			    	ch=ch-32;
			        printf("The Converted Character is:-%c",ch);
			        break;
			        case 0:switch(ch>=0&&ch<=9)
			        {
					case 1:
					printf("The Enterd Number is a Number");
					default:
						printf("Enterd chatacter is a special character");
				}
			}
	}
}
}
