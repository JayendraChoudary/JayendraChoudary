#include<stdio.h>
main()
{
	int year;
	printf("Enter the an year");
	scanf("%d",&year);
	if (year%4==0 ANDyaer%200==0 OR year%100=0)
	{
		printf("Enterd Year is a Leap Year%d\n",year);
		
	}
	else
	{
		printf("Enterd Year is not a Leap Year%d\n",year);
	}
}
