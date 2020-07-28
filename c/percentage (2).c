#include<stdio.h>
main()
{
int a,b,c,d,e,g;
float f;
printf("ENTER MARKS OBTAINED IN MATHEMATICS : ");
scanf("%d",&a);
printf("ENTER MARKS OBTAINED IN PHYSICS :");
scanf("%d",&b);
printf("ENTER MARKS OBTAINED IN HINDI");
scanf("%d",&c);
printf("ENTER MARKS OBTAINED IN ENGLISH");
scanf("%d",&d);
e=a+b+c+d;
f=(e/400)*100;
g=a+b;
printf("\nMARKS OBTAINED IN SCIENCE SUBJECT IS : %d",g);
printf("\nTOTAL MARKS OBTAINED IS: %d",e);
printf("\nPERCENTAGE OF YOUR TOTAL MARKS IS: %f",f);
}

