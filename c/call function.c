#include<stdio.h>
swap(int x,int y);
main()
{
	int x,y;
	printf("enter x and y: ");
	scanf("%d%d",&x,&y);
	swap(x,y);//FUNCTION CALL
	printf("x=%d AND y=%d",x,y);
}
swap(int x,int y)
{
int z;
z=x;
x=y;
y=z;
	printf("\nx=%d AND y=%d IN swap FUNCTION\n",x,y);
}

