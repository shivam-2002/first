#include<stdio.h>
main()
{
int a[2][3],x,y,temp;
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





for(x=0;x<3;x++)
{
for(y=0;y<2;y++)
{
printf("%d\t",a[y][x]);
}
printf("\n");
}
}

