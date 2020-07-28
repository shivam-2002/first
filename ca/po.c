#include<stdio.h>
main()
{
    float p,r,t,*p1,*p2,*p3,*p4;
    float si;
    printf("enter principle,rate and time: ");
    scanf("%f%f%f",&p,&r,&t);
    p1=&p;
    p2=&r;
    p3=&t;
    p4=&si;
    *p4=(*p1* *p2* *p3)/100;
    printf("%f",*p4);
}
