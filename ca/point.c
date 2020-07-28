#include<stdio.h>
main()
{
    int a,*p1;
    printf("enter value of a: ");
    scanf("%d",&a);
    p1=&a;
    if(*p1%2==0)
    {
        printf("a is the even number");
    }
    else
    {
        printf(" a is odd number");
    }
}
