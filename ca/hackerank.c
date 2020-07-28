#include<stdio.h>
main()
{
    int a,b,i,n;
    1<=a<=b<=1000000;
    scanf("%d\n",&a);
    scanf("%d",&b);
    if(a<=9&&b>=9)
    {
        for(n=a;n<=9;n++)
        {
            if(n==1)
        {
            printf("one\n");
        }
        else if(n==2)
        {
            printf("two\n");
        }
        else if(n==3)
        {
            printf("three\n");
        }
        else if(n==4)
        {
            printf("four\n");
        }
        else if(n==5)
        {
            printf("five\n");
        }
        else if(n==6)
        {
            printf("six\n");
        }
        else if(n==7)
        {
            printf("seven\n");
        }
        else if(n==8)
        {
            printf("eight\n");
        }
        else
        {
            printf("nine\n");
        }
        }
    }
    else if(a<9&&b<9)
    {
    	for(n=a;n<=b;n++)
    	{
    		   if(n==1)
        {
            printf("one\n");
        }
        else if(n==2)
        {
            printf("two\n");
        }
        else if(n==3)
        {
            printf("three\n");
        }
        else if(n==4)
        {
            printf("four\n");
        }
        else if(n==5)
        {
            printf("five\n");
        }
        else if(n==6)
        {
            printf("six\n");
        }
        else if(n==7)
        {
            printf("seven\n");
        }
        else if(n==8)
        {
            printf("eight\n");
        }
    		
		}
	}
    for(n=10;n<=b;n++)
    {
       if(n%2==0)
       {
           printf("even\n");
       }
       else
       {
           printf("odd\n");
       }
    }
}
