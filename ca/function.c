#include<stdio.h>
add();
main()
{
	add();
}
add()
{
	int a,b,c;
	printf("enter value of a and b");
	scanf("%d%d",&a,&b);
	c=a+b;
	printf("sum is %d",c);
}
