#include<stdio.h>
main()
{
	int x,y,a[5][5],b[5][5],c[5][5];

	for(x=0;x<5;x++)
	{
		for(y=0;y<5;y++)
		{
			printf("Enter element at incex %d %d:- ",x,y);
			scanf("%d",&a[x][y]);
		}
	}
	for(x=0;x<5;x++)
	{
		for(y=0;y<5;y++)
		{
			printf("%d\t",a[x][y]);
		}
		printf("\n");
	}

	for(x=0;x<5;x++)
	{
		for(y=0;y<5;y++)
		{
			printf("Enter element at inder %d%d",x,y);
			scanf("%d",&b[x][y]);
		}
	}
	for(x=0;x<5;x++)
	{
		for(y=0;y<5;y++)
		{
			printf("%d\t",b[x][y]);
		}
		printf("\n");
	}
	printf("\n\n");
	for(x=0;x<5;x++)
	{
		for(y=0;y<5;y++)
		{
			c[x][y]=a[x][y]+b[x][y];
			printf("%d\t",c[x][y]);
		}
		printf("\n");
	}

}
