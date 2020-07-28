#include<stdio.h>
main()
{
	int a;
	char name[25];
	int regno,rollno;
	printf("ENTER YOUR NAME,REG NO AND ROLL NO: ");
	scanf("%s%d%d",&name,&regno,&rollno);
	for(a=1;a<=10;a++)
	{
		printf("\n %s",name);
		printf("\n%d",regno);
		printf("\n%d",rollno);
	}
}
