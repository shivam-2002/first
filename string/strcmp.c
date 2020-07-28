#include<stdio.h>
main()
{
	char a[20]="Hello",b[20]="Hi";
	int x,la,lb,check;
	la=strlen(a);
	lb=strlen(b);
	if(la==lb)
	{
		for(x=0;x<la;x++)
		{
			if(a[x]==b[x])			{
				check++;
			}
		}
		if(check==la)
		{
			printf("same");
		}
		else
		{
			printf("not same");
		}
		
	}
	else
	{
		printf("not same");
	}
	
/*	char a[20]="Hello",b[20]="Hi";
	if(strcmp(a,b)==0)
	{
		printf("same");
	}
	else
	{
		printf("not same");
	}*/
	
}


