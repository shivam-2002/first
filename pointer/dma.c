#include<stdio.h>
main()
{
	int *p,x,sum=0;
	p=(int *)malloc(20);//appling DMA 
	printf("enter data");
	for(x=0;x<5;x++)
	{
		scanf("%d",p);
		//sum=sum+ *p;
		p++;//it goes to next address
	}
	p=p-5;//goes to the initial address
	printf("elements are");
	for(x=0;x<5;x++)
	{
		printf("%d\n",*p);
			sum=sum+ *p;
		p++;
	
	}
	printf("%d",sum);
	/* or we can find sum
	p=p-5;
	for(x=0;x<5;x++)
	{
	sum=sum+ *p;
	p++;
     }
}
