#include<stdio.h>
main()
{
	int a,b,c,d;
	printf("ENTER NUMBERS: ");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	(a>b)?(a>c)?(a>d)?printf("a IS GREATER"):printf("d IS GREATER"):(b>c)?(b>d)?printf("b IS GREATER"):printf("d IS GREATER"):(c>d)?printf("c IS GREATER"):printf("d IS GREATER");
}
