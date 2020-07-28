#include<stdio.h>
main()
{
	int a,b,c,l;
	printf("ENTER VALUE OF a AND b");
	scanf("%d%d",&a,&b);
	printf("ENTER 'A' FOR ADDITION AND 'B' FOR SUBSTRACTION");
	scanf("%d",&l);
	switch(l)
	{
		case 'A':
			c=a+b;
			printf("sum is %d",c);
		case 'B':
		c=a-b;
		printf("substraction is %d",c);
		default :
		printf("entered choice is wrong");	
	}
}
