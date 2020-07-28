#include<stdio.h>
attendence(float *p);
main()
{
    float s[5],*p;
    int x;
    for(x=0;x<5;x++)
    {
        scanf("%f",&s[x]);
    }
    p=s;
    attendence(p);//function call
}
attendence(float *p)
{
    int y;
    float ta=0.0;
    for(y=0;y<5;y++)
    {
       ta=ta+ *p;
       p++;
    }
    ta=(ta*100)/250;
    printf("%f",ta);
    if(ta>=(75))
    {

        printf("eligible for exam");
    }
    else
    {
        printf("you are not eligible");
    }
}
