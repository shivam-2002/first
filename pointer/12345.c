#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    int n,x,y;
    scanf("%d", &n);
    1<=n<=1000;
  	// Complete the code to print the pattern.
      for(x=0;x<=n;x++)
      {
          printf("%d",n-x);
          for(x=0;x<=n;x++)
          {
              printf("%d",n-x-x);
          }
      }

    return 0;
}


