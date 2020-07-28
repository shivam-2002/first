#include<stdio.h>
main()
{
    int a,b,sum1,diff1;
    float c,d,sum2,diff2;
    1<a<10000;
    1<b<10000;
    1<c<10000;
    1<d<10000;
    scanf("%d %d", &a, &b);
    scanf("%f %f", &c, &d);
    sum1=a+b;
    diff1=a-b;
    sum2=c+d;
    diff2=c-d;

    printf("%d %d\n", sum1, diff1);
    printf("%.1f %.1f", sum2, diff2);

}
