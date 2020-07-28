#include<stdlib.h>
main()
{
	int *p,n,x;
	printf("Enter n: ");
	scanf("%d",&n);
	p=(int *)calloc(n,sizeof(int));
	/*printf("Enter Elements: ");
	for(x=0;x<n;x++)
	{
		scanf("%d",p);
		p++;
	}
	p=p-n;*/
	for(x=0;x<n;x++)
	{
		printf("%d\n",*p);
		p++;
	}
	free(p);
	
}
