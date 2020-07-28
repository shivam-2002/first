#include<stdio.h>
main()
{
	int a,b,c,d,e,*p1,*p2,*p3,*p4,*p5;
	float *p6,f;
	printf("enter marks of five subject: ");
	scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
	p1=&a;
	p2=&b;
	p3=&c;
	p4=&d;
	p5=&e;
	p6=&f;//give the address of out put pointer
	*p6=((float)(*p1 + *p2 + *p3 + *p4+ *p5)*100)/500;
	
	
	printf("%f",f);
}
