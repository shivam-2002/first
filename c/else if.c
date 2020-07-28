#include<stdio.h>
main()
{
	int a,b,c,d;
	printf("ENTER VALUE OF a,b,c and d");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	if((a>b)&&(a>c)&&(a>d))
	{
		printf("a IS THE GREATER NUMBER");
	}
	else if((b>c)&&(b>d))
	{
	printf("b IS THE GREATER");
    }
    else if (c>d)
    {
    	printf("c IS THE GREATEST");
	}
	else
	{
		printf("d IS THE GREATEST");
	}
}
