#include<stdio.h>
int check();
main()
{
    int y;
	y=check();

	printf("number is %d",y);
}
int check()
{
	int x;
	printf("enter x");
	scanf("%d",&x);
	if(x%2==0)
	{
		printf("even");
		return x;
	}
	else
	{
	printf("odd");
	return;
	}
}
