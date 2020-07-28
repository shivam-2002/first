#include<stdio.h>
struct student
{
 char name[50];
 int rollno;
 float cgpa;	
}s1,p1;

main()
{
	printf("enter name: ");
	scanf("%s",&s1.name);
	printf("enter rollno and cgpa: ");
	scanf("%d%f",&s1.rollno,&s1.cgpa);
	printf("Your name is: %s\n",s1.name);
	printf("Your roll no is: %d\n",s1.rollno);
	printf("Your cgpa is: %f\n",s1.cgpa);
}
