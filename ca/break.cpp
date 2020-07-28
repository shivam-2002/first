#include<stdio.h>
main()
{
	int a;
	A:
		printf("enter a");
		scanf("%d",&a);
		if(a<5)
		{
			goto A;
		}
		else
		printf("a is greater than five");
}
