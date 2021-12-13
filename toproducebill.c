#include<stdio.h>
main()
{
	int Q,T,gst,Net;
	char M;
	printf("Please Enter the Following from The Menu\n");
    scanf("%c",&M);
    printf("Enter the total Number of pieces Required\n");
	scanf("%d",&Q);
	switch(M)
	{
		case 'B':
			printf("The Selected option is Burger\n");
			T=200*Q;
			printf("The Pre Order Amount=%d\n",T);
			break;
		case 'F':
			printf("The Selected option is FrenchFries\n");
			T=Q*50;
			printf("The Pre Order Amount=%d\n",T);
			break;
		case 'P':
			printf("The Selected option is Pizza\n");
			T=Q*500;
			printf("The Pre Order Amount=%d\n",T);
			break;
		case 'S':
			printf("The Selected option is Sandwich\n");
			T=Q*150;
			printf("The Pre Order Amount=%d\n",T);
		default:
			printf("Enterd Character is Invalied");
			
	}
	printf("The Delivery Charge Is 50R.S\n");
	printf("Gst for the product is 10 Percent\n");
	gst=T*10/100;
	printf("gst=%d\n",gst);
	Net=T+gst+50;
	printf("The Total Bill Amount=%d",Net);
	
	
	
}

