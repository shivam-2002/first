#include<stdio.h>
main()
{
	float cgpa[10];
	int a;
	for(a=0;a<10;a++)
	{
		printf("ENTER CGPA");
		scanf("%f",&cgpa[a]);
	}
	printf("ARRAY ELEMENTS ARE: ");
	for(a=0;a<10;a++)
	{
	printf("%f ",cgpa[a]);	
	}
}
