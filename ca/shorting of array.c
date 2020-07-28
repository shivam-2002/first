#include<stdio.h>
main()
{
	int a[10],x,y,temp;
	for(x=0;x<10;x++)
	{
		printf("enter the elements at index %d ",x);
		scanf("%d",&a[x]);
	}
	for(x=0;x<10;x++)//for passing
	{
		for(y=0;y<9;y++)//for swapping
		{
		if(a[y]>a[y+1])
        {
		temp=a[y];
		a[y]=a[y+1];
		a[y+1]=temp;
		}
	}
	}
	for(x=0;x<10;x++)
	{
		printf("elements at index %d is %d\n",x,a[x]);
	}
}
