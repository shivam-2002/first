#include<stdio.h>
main()
{
	char product[5][25];
	float quantity[5],price[5],totalbill=0;
	int a,totalamount;
	for(a=0;a<5;a++)
	{
		printf("ENTER PRODUCT NAME , PRICE : AND QUANTITY : ");
		fflush(stdin);
		scanf("%s%f%f",&product[a],&price[a],&quantity[a]);
		printf("%f*%f=%f\n",price[a],quantity[a],price[a]*quantity[a]);
	}
	for(a=0;a<5;a++)
	{
		totalbill=totalbill+(price[a]*quantity[a]);
	}
	printf("%f",totalbill);
	if(totalbill>500)
	{
		totalbill*=(0.95)*totalbill;
		printf("\nTotal payable bill after 5 percent discount is : %f", totalbill) ;
	}
	else
	{
	}
	
}
