#include(stdio.h)
main()
{
	float s1,s2,s3,s4,s5,ta,;
	printf("ENTER ATTENDANCE OF FIVE SUBJECT: ");
	scanf("%f%f%f%f%f",&s1,&s2,&s3,&s4,&s5);
	ta=((s1+s2+s3+s4+s5)/250)*100;
	printf("TOTAL ATTENDANCE IS: %f",ta);
	if(ta>=75)
	{
		printf("STUDENT ARE ELIGIBLE FOR SIT IN EXAM");
	}
}
