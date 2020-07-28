#include<stdio.h>
main()
{
	char a[50],b[50];
	int x,la;
	printf("Enter string");
	gets(a);
	la=strlen(a);
	for(x=0;x<la;x++)
	{
		b[x]=a[(la-1)-x];
		
	}
	puts(b);
}
