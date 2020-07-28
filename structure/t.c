#include<stdio.h>
main()
{
    int n;
    scanf("%d",&n);
    int a[n],x,p=0,b=0,c=0;
      float e,f,g;
    for(x=0;x<n;x++)
    {
        scanf("%d ",&a[x]);
        if(a[x]>0)
        {
           p++; 
        }
        else if(a[x]<0)
        {
            b++;
        }
        else
        {
            c++;
        }
    }
    e==p/n;
    f==b/n;
    g==c/n;
printf("%f\n%f\n%f",e,f,g);
}
