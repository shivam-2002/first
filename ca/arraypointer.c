#include<stdio.h>
main()
{
    int a=5,*p;
    p=&a;
    printf("%d\n",*p);  //5
    printf("%d\n",*(++p));
    printf("%d\n",&*++p);  //garbage value
    printf("%d\n",&a); //address of a
    printf("%d\n",&p); //adress of p(garbage value:) next
    printf("%d\n",*p); //garbage value
    printf("%d\n",p);//adress of garbage value
    printf("%d\n",*--p);
    printf("%d\n",*--p);
    printf("%d\n",*p);
    printf("%d\n",p);
    printf("%d\n",++(*p)); //increament the value at some address
    printf("%d\n",++*p);  //increament the value at some address
}
