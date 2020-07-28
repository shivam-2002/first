#include<stdio.h>
main()
{
	int a[100],n,i;
	printf("enter no. of element");
	scanf("%d",&n);
	printf("enter elements to the array");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=n-1;i>=0;i--)
	{
	printf("%d",a[i]);
}
}
