#include<stdio.h>
main()
{

    int a,t,*p;
    printf("enter number to write table: ");
    scanf("%d",&t);
    p=&t;
    for(a=1;a<10;a++)
    {
        printf("%d*%d=%d\n",a,*p,a**p);
    }

}
