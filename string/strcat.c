#include<stdio.h>
main()
{
	/*char a[20]="HELLO",b[20]="Hi";
	strcat(a,b);
	printf("%s",a);*/
	char a[20]="Hello",b[20]="Hi";
	int x,la,lb;
	la=strlen(a);
	lb=strlen(b);
	for(x=0;x<lb;x++)
	{
		a[la+x]=b[x];
	}
	a[la+lb]='\0';
	puts(a);
}
