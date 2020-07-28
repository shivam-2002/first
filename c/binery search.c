#include<stdio.h>
main()
{
	int a[10],x,mi,se,fi=0,li;
	for(x=0;x<10;x++)
	{
		printf("enter element: ");
		scanf("%d",&a[x]);
	}
	fi=0;
	li=10-1;
	printf("enter searching element");
	scanf("%d",&se);
	while(fi!=li)
	{
		mi=(fi+li)/2;
		if(se==a[mi])
		{
			printf("element found at inder %d",mi);
			break;
		}
		else if(se>a[mi])
		{
			fi=mi+1;
		}
		else
		{
			li=mi-1;
		}
	}
}
