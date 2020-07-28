#include<stdio.h>
int max of four(int a,int b,int c,int d);

main()
{
    max;
}
max()
{
    int a,b,c,d;
    scanf("%d%d%d",&a,&b,&c,&d);
    if(a>b)
    {
        if(a>c)
        {
            if(a>d)
            {
                max=a;
            }
        }
    }
    else if(b>c)
    {
        if(b>d)
        {
            max=b;
        }
    }
    else if(c>d)
    {
        max=c;
    }
    else
    {
        max=d;
    }
    return max;
}
