#include<stdio.h>
display(char y)
{
	printf("%c",y);
}
main()
{
	char a[]={'L','P','U'};
	int x;
	for(x=0;x<3;x++)
	display(a[x]);
}
