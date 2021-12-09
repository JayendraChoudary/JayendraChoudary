#include<stdio.h>
main()
{
	int a;
	printf("Enter the marks Obtained");
	scanf("%d",&a);
	if(a>=90)
	{
		printf("The Grade obtained =A");
	}
	else if(a>=80)
	{
		printf("The Grade obtained =B");
	}
	else if(a>=70)
	{
		printf("The Grade obtained =C");
	}
	else if(a>=60)
	{
		printf("The Grade obtained =D");
	}
	else if(a>=50)
	{
		printf("The Grade Obtained =E");
	}
	else if(a<50)
	{
		printf("The Grade Obtained =F");
	}
	else
	{
		printf("Enter a Valid Mark");
	}
}
