#include<stdlib.h>
main()
{
	int *p,n,x,sum=0;
	printf("enter value of n: ");
	scanf("%d",&n);
	p=(int *)malloc(n*sizeof(int));
	if(n>5)
	{
		for(x=0;x<n;x++)
		{
			scanf("%d",p);
			if(*p%2==0)
			{
				sum=sum+ *p;
			}
		  p++;
		}
		for(x=1;x<=10;x++)
		{
		    printf("%d*%d=%d\n",sum,x,sum*x);		
		}
		
	}
	else
	{
	     	for(x=0;x<n;x++)
		    {
		    	scanf("%d",p);
			    if(*p%2!=0)
			    {
			    	sum=sum+ *p;
			    }
		      p++;
	     	}
	     	
		printf("%d",sum*sum);	
	}

	
}
