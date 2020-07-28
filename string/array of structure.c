#include<stdio.h>
struct student
{
	char name[30];
	int rollno;
	float cgpa;
}s1[10];
main()
{
	int x=0;
	printf("enter name roll and cgpa: ");
	for(x=0;x<3;x++)
	{
		scanf("%s %d %f",&s1[x].name,&s1[x].rollno,&s1[x].cgpa);
	}
	printf("Data base element is: ");
	for(x=0;x<3;x++)
	{
		printf("%s %d %f",s1[x].name,s1[x].rollno,s1[x].cgpa);
	}
}
