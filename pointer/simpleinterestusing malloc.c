#include<stdlib.h>
main()
{
    int *p,x;
    p=(int *)malloc(16);
    printf("enter value of principle,rate and time");
    for(x=0;x<3;x++)
    {
        scanf("%d",p);
    }
    p=p-3;
    *(p+3)=(*p * *(p+1) * *(p+2))/100;
    printf("simple interest is : %d",*(p+3));
}
