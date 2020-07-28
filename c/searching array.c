#include<stdio.h>
main()
{
	int a[10],x,se,sc=0;
	for(x=0;x<10;x++)
	{
		printf("ENTER ELEMENT AT INDEX %d: ",x);
		scanf("%d",&a[x]);
	}
	printf("ENTER ELEMENT TO SEARCH: ");
	scanf("%d",&se);
	for(x=0;x<10;x++)
	{
		if(se==a[x])
		{
			printf("ELEMENT FOUND AT LOCATION: %d\n",x+1);
			sc++;
			break;
		}
	
	}
	if(sc==0)
	printf("ELEMENT NOT FOUND");
}
