#include<stdio.h>
main()
{
	int x,count=0;
	char a[50];
	printf("Enter string a:- ");
	gets(a);
	for(x=0;a[x]!='\0';x++)
	{
		count++;
	}
	printf("%d\n",count);
	strrev(a);
	
	
	puts(a);
	
	
	printf("%s\n",strrev(a));
	
	printf("%d",strlen(a));
	
	
}
