#include<stdio.h>
struct student-. 
{
	char name[55];
	int rollno;
	       struct stdetails
	       {
	       	float cgpa;
	       	float att;
		   } ad;
} sd;
main()
{
	printf("Enter details: ");
	scanf("%s %d %f %f",&sd.name,&sd.rollno,&sd.ad.cgpa,&sd.ad.att);
	printf("%s%d%f%f",sd.name,sd.rollno,sd.ad.cgpa,sd.ad.att);
}
