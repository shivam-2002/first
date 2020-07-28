#include<stdio.h>
main()
{
	int *p,m,n,x;
	printf("Enter n: ");
	scanf("%d",&n);
	p=(int *)calloc(n,sizeof(int));
	printf("Enter Elements: ");
	for(x=0;x<n;x++)
	{
		scanf("%d",p);
		p++;
	}
	p=p-n;
	for(x=0;x<n;x++)
	{
		printf("%d\n",*p);
		p++;
	}
	p=p-n;
	printf("Enter m: ");
	scanf("%d",&m);
	p=realloc(p,m*sizeof(int));
	p=p+n;
	//printf("%d",p);//
	for(x=0;x<m;x++)
	{
		scanf("%d",p);
		p++;
	}
	p=p-(m+n);
	for(x=0;x<(n+m);x++)
	{
		printf("%d",*p);
		p++;
	}
}
