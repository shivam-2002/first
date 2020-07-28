#include<stdio.h>
main()
{
	int *p,n,x,k;
	printf("enter n: ");
	scanf("%d",&n);
	p=(int *)calloc(n,sizeof(int));
	for(x=0;x<n;x++)
	{
		scanf("%d",p);
		p++;
	}
	
	printf("Enter value of K to reallocate: ");
	scanf("%d",&k);
		p=realloc(*p,k*sizeof(int));
		for(;x<k+n;x++)
	{
		scanf("%d",p);// p are updated to next address
		p++;
	}
	p=p-(n);
	printf("the elements are: ");
	for(x=0;x<n+k;x++)
	{
		printf("%d\n",*p);
		p++;
	}

}
