#include<iostream>
using namespace std;
int main()
{
int base,power,mod_divisor,i,num2;
int num=1;
cout<<"Enter Base:";
cin>>base;
cout<<"Enter Power:";
cin>>power;
cout<<"Enter Modular divisor:";
cin>>mod_divisor;
	for(i=1;i<=power;i++)
	{
		num=num*base;
	}
num2=num%mod_divisor;
cout<<base<<"^"<<power<<"("<<"mod"<<mod_divisor<<")"<<"\t:"<<num2;
cout<<"\nName:Aadarsha Bhattarai\tRoll no:1";
return 0;
}

