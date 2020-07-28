#include<stdio.h>
char display(char y)
{
	printf("%c",y);
}
main()
{
	char a[]={'L','P','U'};
	int x;
	for(x=0;x<3;x++)
	{
		display(a[x]);
	}
}
//by using of pointer
//  char display(char *y)
//  {
//   printf("%c",y);
//   }
//   main()
//  {
//	char a[]={'L','P','U'},*p;
//	int x;
//	p=a;
//	for(x=0;x<3;x++)
//	display(*p+x);/
//  }
