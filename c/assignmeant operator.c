#include<stdio.h>
main()
{
float a,b;
	printf("enter value of a and b ");
	scanf("%f%f",&a,&b);
	a+=b;
	
	printf("value of a is now %f", a);
	a*=b;
	printf("\nvalue of a is now; %f", a);
	a/=b;
	printf("\nvalue of a now %f", a);
	a-=b;
	printf("\nvalue of a is now %f", a);

	
}

