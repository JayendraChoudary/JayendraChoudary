#include<stdio.h>
main()
{
int A,B,C,D,F,Total=0;
	printf("Enter the Total No.Of 10Rs Notes\n");
	scanf("%d",&A);
	printf("Enter the Total No.Of 20Rs Notes\n");
	scanf("%d",&B);
	printf("Enter thr Total No.of 50Rs Notes\n");
	scanf("%d",&C);
	printf("Enter the Total No.of 100Rs Notes\n");
	scanf("%d",&D);
	printf("Enter the Total No.of 500Rs Notes\n");
	scanf("%d",&F);
	Total=10*A+20*B+50*C+100*D+500*F;
	printf("The Total Amount in the PiggyBank=%d\n",Total);
}
