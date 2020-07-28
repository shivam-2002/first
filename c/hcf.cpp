#include<iostream>
using namespace std;
int main()
{
	int a,b,n,hcf;
	cin>>a>>b;
	(a>b)?n=b:n=a;
	for(int i=1;i<=n;i++)
	{
		if((a%i==0)&&(b%i==0))
		{
			hcf=i;
		}
	}
	cout<<hcf;
}
