#include<stdio.h>
main()
{
	int a,n,sum=0;
	a=1;
	while(a<=10)
	{
		printf("ENTER NUMBERS: ");
		scanf("%d",&n);
		if(n<5)
		{
			sum=sum+n;
		}
	}
	printf("SUM OF THE NUMBER IS %d",sum);
	
}
