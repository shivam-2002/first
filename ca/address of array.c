#include<stdio.h>
main()
{
    int a[5],sumoe=0,proo=1,i;
    for(i=0;i<5;i++)
    {
    printf("ENTER NUMBERS: ");
    scanf("%d",&a[i]);
    if(a[i]%2==0)
    {
        sumoe=sumoe+a[i];
    }
    else
        proo=proo*a[i];
    }
    printf("%d\t%d",sumoe,proo);
}
