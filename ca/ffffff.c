#include<stdio.h>
main()
{
    int a,fe,le,se,me,e[10];
    for(a=0;a<10;a++)
    {
        printf("ENTER THE ELEMENTS AT INDEX:%d ",a);
        scanf("%d",&e[a]);
    }
    printf("ENTER SEARCHING ELEMENTS: ");
    scanf("%d",&se);
    while(fe!=se)
    {
        me=(fe+le)/2;
        if(se==me)
        {
            printf("element found at index %d",me);
            break;
        }
        else if(se>me)
        {
           fe=me+1;
        }

        else
        {
          le=me-1;
        }

    }
}
