#include<stdio.h>
union student
{
	char name[20];
	int rollno;
	float cgpa;
}st;
main()
{
	printf("Enter details: ");
	scanf("%s%d%f",&st.name,&st.rollno,&st.cgpa);
	printf("%s\n%d\n%f\n",st.name,st.rollno,st.cgpa);
	printf("%d\n%d\n%d\n",&st.name,&st.rollno,&st.cgpa);
}
