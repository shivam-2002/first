#include<stdio.h>
main()
{
	int a,b,c,d,e;
	printf("ENTER VALUE OF a,b,c,d AND e ");
	scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
	if(a>b)
	{
		if(a>c)
		{
			if(a>d)
			{
				if(a>e)
				{
				printf("a is the greater number ");		
				}
				else
				{
				printf("e is greater");
				}
			}
			else
			{
			printf("d is greater");
			}
		}
	}
	else if(b>c)
		{
			if(b>d)
			{
				if(b>e)
				{
					printf("b IS GREATER: ");
				}
				else
				{
					printf("e IS GREATER");
				}
		    }
			else
			    {
				printf("d IS GREATER");
				}
	    }
		else
		    {
			printf("c IS GREATER");
			}
    }
	else if(b>c)
	   {
		if(b>d)
		{
			if(b>e)
			{
			printf("b IS THE GREATER NUMBER");	
			}
			else
			{
				printf("e IS GREATER");
			}
		}
		else
		{
			printf("d IS THE GREATER NUMBER");
		}
	    }
		else
		{
			printf("c IS GREATER");
		}
	
	else if(c>d)
	{
		if(c>e)
			{
			printf("C IS THE GREATER NUMBER");
			}
		else
		{
			printf("e IS THE GREATER NUMBER");
		}
		
		else
		{
			printf("d IS GREATER");
		}
	}
	else if(d>e)
	{
		printf("d IS THE GREATER NUMBER");
	}
	else
	{
		printf("e IS THE GREATER NUMBER");
	}
}
