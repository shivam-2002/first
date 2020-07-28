#include<stdio.h>
main()
{
	int a[11],x,ne,pos;
	for(x=0;x<10;x++)
	{
		printf("enter elements: ");
		scanf("%d",&a[x]);
	}
	printf("enter element to insert: ");
	scanf("%d",&ne);
	printf("enter position for new element: ");
	scanf("%d",&pos);
	for(x=10-1;x>=pos;x--)
	{
	a[x+1]=a[x];	
	}
	a[pos]=ne;
	for(x=0;x<11;x++)
	{
		printf("element at index %d is %d\n",x,a[x]);	
	}

	
}
