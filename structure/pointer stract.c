#include<stdio.h>
struct student
{
	char name[30];
	int rollno;
}st,st2;
main()
{
	printf("Enter derails: ");
	scanf("%s\nf%d",&st.name,&st.rollno);
	st2=st;//copy content of first object(st) into second object(st2)
	printf("%s\n%d\n",st2.name,st2.rollno);
}
