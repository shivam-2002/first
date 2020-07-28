#include<stdio.h>
main()
{
	int a[5],*p,x;
	for(x=0;x<5;x++)
	{
		scanf("%d",&a[x]);
		
	}
	p=a;
	printf("Element  array  address\n");
	for(x=0;x<5;x++)
	{
		printf("a[%d]     %d       %d\n",x,*p,p);
		p++;
	}
}
