#include<stdio.h>
display(int *x);
main()
{
	int x;
	printf("enter x ");
	scanf("%d",&x);
	display(&x);
	printf("\nx is main is %d",x);
	printf("\naddress of x in main %d",&x);
}
display(int *x)
{
	*x=*x+1;
	printf("\nvalu of x is display %d",*x);
	printf("\naddress of x in display %d",&*x);
}
