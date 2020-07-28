#include<stdio.h>
main()
{
    int a[10],x,y,t;
    for(x=0;x<10;x++)
    {
        printf("enter element at index %d:",x);
        scanf("%d",&a[x]);
    }
    for(x=0;x<10;x++)
    {
        for(y=0;y<9;y++)
        {
            if(a[y]>a[y+1])
            {
                t=a[y];
                a[y]=a[y+1];
                a[y+1]=t;
            }
        }
    }
    for(x=0;x<10;x++)
    {
        printf("%d %d\n",x,a[x]);
    }
}
