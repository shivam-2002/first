#include<stdio.h>
main()
{
	int a[10],sum=0,x;
	for(x=0;x<10;x++)
	{
		printf("ENTER THE ELEMENTS: ");
		scanf("%d",&a[x]);
		sum=sum+a[x];
	}
	printf("%d",sum);
}
