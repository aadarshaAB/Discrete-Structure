#include<iostream>
using namespace std;
int a_pow_n(int a,int n)
{
	int b=1;
	int i;
	for(i=1;i<=n;i++)
	{
		b=b*a;
	}
	return b;
}
int main()
{
	int a,b,x;
	cout<<"Enter Base:"<<endl;
	cin>>a;
	cout<<"Enter Power:"<<endl;
	cin>>b;
	x=a_pow_n(a,b);
	cout<<"The "<<a<<"^"<<b<<"\t="<<x<<endl;
	cout<<"Name:Aadarsha Bhattarai\tRoll no,:1";
	return 0;
}
