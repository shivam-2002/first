#include<stdio.h>
main()
{
	int *p,n;
	printf("enter n: ");
	scanf("%d",&n);
	p=(int *)malloc(n*sizeof(int));                    //we are not using this value we are using manually pointer
	*p=11;                   //manually assining the values of pointer
	printf("%d\n",*p);
	p++;//holds next address
	*p=23;
	printf("%d\n",*p);
	printf("%d\n",p);
/*	*(p+1);//pointing next address;
	*p=44;
	printf("%d\n",*p);
	p+1;
	*p=44;
	printf("%d\n",*p);
	printf("%d\n",p);
	p=p+1;
	*p=44;
	printf("%d\n",*p);
	printf("%d\n",p); */
	*(p+1)=66;
	p++;
	printf("%d/n",*p);
	
}
