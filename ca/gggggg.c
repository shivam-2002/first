#include<stdio.h>
main()
{
	int a[5],n,i,large;
	printf("enter no. of element");
	scanf("%d",&n);
	printf("enter elements to the array");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	large=a[0];
	for(i=1;i<n;i++)
	{
		if(a[i]>large)
		{
			large=a[i];
		}
	}
	printf("largest number in array is %d",large);
}
