#include<stdio.h>
main()
{
	int *p,n,x;
	printf("Enter n:");
	scanf("%d",&n);
	p=(int *)malloc(n*sizeof(int));
	printf("enter elements: ");
	for(x=0;x<n;x++)
	{
		scanf("%d",p);
		p++;
	}
	printf("================================================================================================\n");
	p=p-n;
	for(x=0;x<n;x++)
	{
		printf("%d\n",*p);
		p++;
	}
	printf("---------------------------------");
	free(p);   /// it is example of dangling pointer 
	// no any value at location of p.
	
	
	for(x=0;x<n;x++)
	{
		printf("%d\n",&*p);
		p++;
	}
	
}
