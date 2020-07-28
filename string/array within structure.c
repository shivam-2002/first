#include<stdio.h>
struct student
{
	char name[10][50];
	int rollno[10];
	float cgpa[10];
	
}s1;

main()
{
	int x;
	for(x=0;x<3;x++)
	{
		printf("Enter name,rollno and cgpa: ");
		scanf("%s%d%f",&s1.name[x],&s1.rollno[x],&s1.cgpa[x]);
	}
	printf("Database details are: \n");
	for(x=0;x<3;x++)
	{
		printf("%s\t %d \t%f\n",s1.name[x],s1.rollno[x],s1.cgpa[x]);
	}
}
