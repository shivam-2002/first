#include<stdio.h>
main()
{
int a,b,c;
printf("ENTER VALUE OF a,b and c");
scanf("%d%d%d",&a,&b,&c);
if((a>b)&&(a>c))
{
printf("a IS THE GREATEST NUMBER");
}
else if(b>c)
{
printf("b IS THE GREATEST NUMBER");
}
else
{
printf("c IS THE GREATEST NUMBER");
}
}
