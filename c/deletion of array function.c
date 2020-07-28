#include<stdio.h>
main()
{
	int a[10],x,de,pos;
	for(x=0;x<10;x++)
	{
		printf("enter elements: ");
		scanf("%d",&a[x]);
	}
	printf("enter elements to delete: ");
	scanf("%d",&de);
	for(x=0;x<10;x++)
	{
		if(de==a[x])
		{
			pos=x;
			break;
		}
	}
	for(x=pos;x<10;x++)
	{
		a[x]=a[x+1];
	}
	for(x=0;x<9;x++)
	{
		printf("element at index %d is %d\n",x,a[x]);
	}
}
