#include<stdio.h>
main()
{
	char a[20]="Hello",b[20]="HELLO";
	if(stricmp(a,b)==0)
	{
		printf("same");
	}
	else
	{
		printf("not same");
	}
	
}		
