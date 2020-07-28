#include<stdio.h>
main()
{
	int rollno[10],a;
	for(a=0;a<10;a++)
	{
		printf("ENTER ROLL NUMBER:");
		scanf("%d",&rollno[a]);
	}

printf("ARRAY ELEMENTS ARE");
for(a=0;a<10;a++)
	{
		
		printf("%d",rollno[a]);
	}
}
