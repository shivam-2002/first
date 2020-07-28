#include<stdio.h>
main()
{
	int a,b,c,d,e;
	printf("ENTER FIVE NUMBERS");
	scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
	if(a>b)
	{
		if(a>c)
		{
			if(a>d)
			{
				if(a>e)
				{
					printf("a IS THE GREATER NUMBER",a);
				}
				else
				{
					printf("e IS THE GREATR NUMBER",e);
				}
			}
			else
			{
				printf("d IS THE GREATER NUMBER",d);
			}
		}
		else
		{
			printf("c IS THE GREATER NUMBER",c);
		}
	}
	else
	{
	 
	if(b>c)
	{
		if(b>d)
		{
			if(b>e)
			{
				printf("b IS THE GREATER NUMBER",b);
			}
			else
			{
				printf("e IS THE GREATER NUMBER",e);
			}
		}
		else
		{
			printf("d IS THE GREATER NUMBER",d);
		}
	}
    }
	else
	{
	if(c>d)
	{
		if(c>e)
		{
			printf("c IS THE GREATER NUMBER",c);
		}
		else
		{
			printf("e IS THE GREATER NUMBER",e);
		}
	}
}
	else
	{
	if(d>e)
	{
		printf("d IS THE GREATER NUMBER",d);
	}
    }
	else
	{
		printf("e IS THE GREATER NUMBER.e");
	}
}
