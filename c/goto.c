#include<stdio.h>
main()
{
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	if(a>b)
	{
		if(b>c)
		{
			printf("a is greater number");
		}
		
	}
	if(b>c)
	{
		printf("b is greater number");
	}
	if(c>b)
	{
		if(c>a)
		{
			printf("c is greater number");
		}
	}
	
}
