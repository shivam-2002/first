#include<iostream>
using namespace std;
int main()
{
	unsigned long long int a1,a2,a3,n,l=1;
	cin>>n;
	a1=0;
	a2=1;
	if(n>=2)
	{
		for(long long int i=2;i<=n;i++)
		{
		a3=a1+a2;
		a1=a2;
		a2=a3;
		}
	}
	else
	{
		a3=1;
	}
	cout<<a3%10;
}
