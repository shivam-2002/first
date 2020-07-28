#include<stdio.h>
main()
{
	int a,b,sum=0;
	
	for(a=1;a<=10;a++)
	{
		printf("ENTER TEN NUMBER: ");
	scanf("%d",&b);
		if(b<5)
		{
			sum=sum+b;
			printf("SUM OF NUMBER IS %d",sum);
		}
	  	
	}
}
