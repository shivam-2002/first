#include<stdio.h>
main()
{
	int *p,n,x;
	printf("enter n: ");
	scanf("%d",&n);
	p=(int *)calloc(n,sizeof(int));
	for(x=0;x<n;x++)
	{
		scanf("%d",p);
		p++;
	}
	p=p-n;
	printf("the elements are: ");
	for(x=0;x<n;x++)
	{
		printf("%d\n",*p);
		p++;
	}
}
