#include<stdio.h>
#define pi 3.14
main()
{
	float r,area,circumference;
	printf("ENTER RADIUS OF CIRCLE: ");
	scanf("%f",&r);
	area=pi*r*r;
	circumference=2*pi*r;
	
	if(r>5)
	{
		printf("AREA OF CIRCLE IS: %f",area);
	}
	else
	{
		printf("\nCIRCUMFERENCE OF CIRCLE IS: %f",circumference);
	}
}
