#include<stdio.h>
main()
{
	char grade[10][26];
	int a;
	for(a=0;a<10;a++)
	{
		printf("ENTER NAME: ");
		fflush(stdin);
		scanf("%s",&grade[a]);
	}
	printf("ARRAY ELEMENTS ARE");
	for(a=0;a<10;a++)
	{
		printf(" %s",grade[a]);
	}
}
