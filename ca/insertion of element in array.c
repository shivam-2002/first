#include<stdio.h>
main()
{
int a[10],x,ne,pos;
for(x=0;x<10;x++)
{
printf("enter the elements of array: ");
scanf("%d",&a[x]);
}
printf("enter the new elements: ");
scanf("%d",&ne);
printf("enter the position of the new elements: ");
scanf("%d",pos);
for(x=a-1;x>=pos;x--)
{
a[x+1]=a[x];
}
a[pos]=ne;
for(x=0;x<11;x++)
{
printf("element at index %d %d",x,a[x]);
}
}
