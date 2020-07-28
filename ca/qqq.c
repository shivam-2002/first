#include<stdio.h>
display(int*p);
main()
{
	int a[5],x,*p;
	for(x=0;x<5;x++)
	{
		scanf("%d",&a[x]);
		p=a;
		display(p);
	}
}
	display(int *p)
	{
		int y,sum=0;
		for(y=0;y<5;y++)
		{
			sum=sum+ *p;
			p++;
		}
		printf("%d\n",sum);
	}
	
	

