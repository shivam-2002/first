#include<stdio.h>
display(int x);
main()
{
	int x;
	printf("enter x");
	scanf("%d",&x);
	display(x);
	printf("x is main is %d",x);
	
}
display(intx)
{
	x=x+1;
	printf("valu of x is display %d",x);
}
