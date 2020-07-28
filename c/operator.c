#include<stdio.h>
main()
{
float *a,b,a1,a2,a3;
printf("enter your cgpa in physics,chemistry and mathematics: ");
scanf("%f%f%f",&a1,&a2,&a3);
b=(a1+a2+a3)/3;
a=&b;
printf("%f",*a);
}

