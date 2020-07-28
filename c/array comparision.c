#include<stdio.h>
main()
{
	int a[10],large,x;
	for(x=0;x<10;x++)
	{
		printf("ENTER ELEMENT AT INDEX %d: ",x);
		scanf("%d",&a[x]);
	}
	
	large=a[x];
	for(x=0;x<10;x++)
	{
	if(large<a[x])
	{
		large=a[x];
	}
}
	printf("LARGEST ELEMENT ARE: %d",large);
}
