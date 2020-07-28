#include<stdio.h>
main()
{
    int n;
    scanf("%d",&n);
    int m[n],x,k=0;
    for(x=0;x<n;x++)
    {
        scanf("%d",&m[x]);
    }
    char c[10],d="g";
    scanf("%s",&c);
    
    if(stricmp(d,c)==0)
    {
        for(x=1;x<n;x=x+2)
        {
             k=k+m[x];
        }
    }
    else
    {
        for(x=0;x<n;x=x+2)
        {
            k=k+m[x];
        }
    }
    printf("%d",k);
}




