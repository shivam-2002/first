#include<stdio.h>
main()
{
	char l;
	int a,b;
	float c;
	printf("enter a and b ");
	scanf("%d%d",&a,&b);
	printf("press 'A' for addition and 'B' for substraction: ");
	scanf(" %c",&l);
	switch(l)
	{
		case 'A':
			for(a=1;a<=10;a++)
			{
			printf("%d*%d=%d\n",b,a,b*a);	
			}
			
			break;
		case 'B':
			c=2*3.14*b;
			printf("area is %f",c);
			break;
		default:
				printf("entered choice is wrong");
	}
}
