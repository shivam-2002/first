#include<stdio.h>
main()
int  n, i;
scanf("%d",&n);
int numArrayA[N],numArrayB[N],sumArray[N];
for(i=0;i<N;i++)
{
    scanf("%d",&numArrayA[i]);
}
for(i=0;i<N;i++)
{
    scanf("%d",&numArrayB[i]);
}
for(i=0;i<N;i++)
{
    sumArray[i]=sumArrayA[i]+sumArrayB[i];
}
for(i=0;i<N;i++)
{
    printf("%d\t",sumArray[i]);
}

