#include<stdio.h>
main()
{
	char pro[5];
	float quantity[5],price[5],totalprice,total=0;
	int i;
	for(i=0;i<5;i++)
	{
		printf("ENTER PRODUCT NAME,QUANTITY AND PRICE: ");
		scanf("%c%f%f",&pro[i],&quantity[i],&price[i]);
	
		totalprice=(quantity[i])*(price[i]);
		scanf("%d",&totalprice);
		total=total+totalprice;
			printf("PRICE OF  %d",totalprice);
	}
}
