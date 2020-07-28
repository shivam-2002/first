#include<stdio.h>
main()
{
    int n,s;
    10000<=n<=99999;
    scanf("%d",&n);
    s=n/10000;
    n=n%10000;
    s=s+n/1000;
    n=n%1000;
    s=s+n/100;
    n=n%100;
    s=s+n/10;
    n=n%10;
    s=s+n;
    printf("%d",s);

}
