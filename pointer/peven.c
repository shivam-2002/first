#include<stdio.h>
main()
{
	int a[10],i,*p,*su,sum=0;
	printf("enter numbers: ");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	     p=a;
	}
		
	for(i=0;i<10;i++)
	{
		p=&a[i];//if it cannot be used the we have to update value of p by p++
		if(*p%2==0)
		{
			sum=sum+ *p;
		}
		//p
		
	//printf("%d",sum);	
	}
	su=&sum;
	printf("%d",*su);
	
}
