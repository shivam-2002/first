#include<stdio.h>
main()
{
	int a,b,c,d;
	printf("ENTER VALUE OF a AND b");
	scanf("%d%d",&a,&b);
	printf("ENTER 1 FOR ADDITION AND 2 FOR SUBTRACTION");
	scanf("%d",&d);
	switch(d)
	{
		case 1:
		c=a+b;
		printf("SUM IS: %d",c);
		break;
		case 2:
		c=a-b;
		printf("SUBTRACTION IS: %d",c);
		break;
		default :
		printf("enter choice is wrong");
	}
}
