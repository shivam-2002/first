#include<stdio.h>
bill(float *a,float *b);
main()
{
    int x;
    float p[4],q[4],t[4],*a,*b;
    printf("enter price: ");
    for(x=0;x<4;x++)
    {
        scanf("%f",&p[x]);
    }
    printf("enter quantity: ");
    for(x=0;x<4;x++)
    {
        scanf("%f",&q[x]);
    }
    a=p;
    b=q;
    bill(a,b);
}
bill(float *a,float *b)
{
    int c;
    float totalbill=0;
    for(c=0;c<5;c++)
    {
       totalbill=totalbill+ (*a)*(*b);
    }
    printf("%f",totalbill);
}

