#include<stdio.h>
main()
{
    int a[5],*p,x;
    for(x=0;x<5;x++)
    {
        printf("enter element at index %d ",x);
        scanf("%d",&a[x]);
    }
    p=a;
    for(x=0;x<5;x++)
    {
        printf("%d\n",*p++);
    }
    p=a;
    for(x=0;x<5;x++)
    {
        printf("%d\n",*p+x);
    }
}
