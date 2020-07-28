#include<stdio.h>
main()
{
	int a[2][3],b[2][3],c[2][3],x,y;
	for(x=0;x<2;x++)
{
for(y=0;y<3;y++)
{
printf("enter the elements at index [%d] [%d]: ",x,y);
scanf("%d",&a[x][y]);
}
}
for(x=0;x<2;x++)
{
for(y=0;y<3;y++)
{
printf("%d\t",a[x][y]);
}
printf("\n");
}


for(x=0;x<2;x++)
{
for(y=0;y<3;y++)
{
printf("enter the elements at index [%d] [%d]: ",x,y);
scanf("%d",&b[x][y]);
}
}
for(x=0;x<2;x++)
{
for(y=0;y<3;y++)
{
printf("%d\t",b[x][y]);
}
printf("\n");
}

printf("\t\t\n");
for(x=0;x<2;x++)
{
	for(y=0;y<3;y++)
	{
		c[x][y]=a[x][y]+b[x][y];
		printf("%d\t",c[x][y]);
	}
	printf("\n");
}
}

