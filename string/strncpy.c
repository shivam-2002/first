#include<stdio.h>
main()
{
	char a[30]="hello",b[30];
	strncpy(b,a,3);
	puts(b);
}
