#include<stdio.h>
main()
{
	float marks[100],*pmarks,per,*pper,sum=0;
	int x;
	printf("enter marks of all subjects:");
	for(x=0;x<5;x++)
	{
		scanf("%f",&marks[x]);
		pmarks=marks;   //array it self signifies address so we not need to give array to address operator
	}
	for(x=0;x<5;x++)
	{
		sum=sum + *pmarks++;
	}
	pper=&per;
	*pper=(sum*100)/500;
	printf("percentage is %f",*pper);
}
