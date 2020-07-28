#include<stdio.h>
main()
{
    int a[10],x,de,pos;
    for(x=0;x<10;x++)
    {
    printf("enter element at index%d: ",x);
    scanf("%d",&a[x]);
    }
    printf("enter new element to :");
    scanf("%d",&de);
    printf("enter pos: ");
    scanf("%d",&pos);
    for(x=10-1;x>=pos;x--)
    {

        a[x+1]=a[x];
    }
    for(x=0;x<11;x++)
    {
        printf("%d\n",a[x]);
    }
}

