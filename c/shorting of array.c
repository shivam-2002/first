#include<stdio.h>
main()
{
	int a[10],x,y,temp;
	for(x=0;x<10;x++)
	{
		printf("enter the elements at index %d",x);
		scanf("%d",a[x]);
	}
	for(x=0;x<10;x++)
	{
		for(y=0;y<9;y++)
		{
		if(a[y]>a[y+1])
		temp=a[y];
		a[y]=a[y+1];
		a[y+1]=temp;
			
		}
	}
	for(x=0;x<10;x++)
	{
		printf("elements at index %D is %d\n",x,a[x]);
	}
}
