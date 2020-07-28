#include<iostream>
using namespace std;
int main()
{
	long long int a,b,lcm=1,n;
	cin>>a>>b;
	(a>b)?n=a:n=b;
	for(long long int i=1;i<=n;i++)
	{
		if(a%i==0||b%i==0)
		{
			if(a%i==0)
		{
			a=a/i;
		}
		if(b%i==0)
		{
			b=b/i;
		}
		lcm=lcm*i;
		i=1;
		}
	}
	cout<<lcm;
}
