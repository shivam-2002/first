#include<stdio.h>
main()
{
char a[2][3][25],x,y;
for(x=0;x<2;x++)
{
for(y=0;y<3;y++)
{
printf("enter the elements at index [%d] [%d]: ",x,y);
scanf("%s",&a[x][y]);
}
}
for(x=0;x<2;x++)
{
for(y=0;y<3;y++)
{
printf("%s\t",a[x][y]);
}
printf("\n");
}
}
