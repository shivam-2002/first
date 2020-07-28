#include<stdio.h>
check();
main()
{
	check();
}
	check()
	{
		int x;
		printf("ENTER x: ");
		scanf("%d",&x);
		if(x<5)
		{
			check();
		}
		else
		printf("x is greater than five");
	}

