#include<stdio.h>
struct student
{
	char name[40];
	int rollno;
	
}st;
display(struct student sd2)
{
	printf("Details are: ");
	printf("%s\n%d",sd2.name,sd2.rollno);
}
main()
{
	printf("Enter details: ");
	scanf("%s%d",&st.name,&st.rollno);
	display(st);//function call
	//parameter which we have to pass
}
