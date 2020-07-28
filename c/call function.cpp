#include<stdio.h>
display(int x);
main()
{
	int x,y,z;
	printf("enter x and y");
	scanf("%d%d",&x&y);
	display(&x)
	printf("x in main is %d",x);
	
}
display(int x);
{
	z=x;
	x=y;
	printf("flipping is %d",z);
}

