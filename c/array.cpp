#include<stdio.h>
main()
{
	int a[10],small,x;
	for(x=0;x<10;x++)
	{
		printf("ENTER ELEMENT AT INDEX %d: ",x);
		scanf("%d",&a[x]);
	}
	
	small=a[0];
	for(x=0;x<10;x++)
	{
	if(small>a[x])
	{
		small=a[x];
	}
}
	printf("SMALLEST ELEMENT ARE: %d",small);
}
