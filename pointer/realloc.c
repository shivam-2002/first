#include<stdio.h>
main()
{
int *p, *p2, m, n, x;
scanf("%d", &m);   //m=2
p=(int *)malloc(m*4);
*p=11;
*(p+1)=12;
scanf("%d", &n);   //n=2
p2=realloc(p,n*4);
*p2=13;
*(p2+1)=14;
p=p-(m+n);
for(x=0; x<4; x++)
{
    printf("%d\n", *p);
p++;
}
}
