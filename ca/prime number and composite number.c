#include<stdio.h>
main()
{
    int N,i,k,p=2,q;
    1<=N<=1000;
    scanf("%d",&N);
    if(N>2)
    {
	printf("%d",2);
	}
    for(i=1;i<N;i++)
    {
        for(k=2;k=i;k++)
        {
            if(i%k==0)
            {
               p=i; 
            
                break;
            }
            else
            {
                q=i;
                printf("  %d",q);
                break;
            }
           
        }
      
    }
}
