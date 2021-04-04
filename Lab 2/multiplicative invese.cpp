#include<iostream>
using namespace std;
void mul_inverse(int a,int b,int m)
{
	if(a*b%m==1){
	cout<<a*b<<" mod "<<b<<endl;
	cout<<(a*b)%m<<endl;
	cout<<b<<" is multiplicative inverse of "<<a<<" in mod "<<m<<endl;
	}
	else{
			cout<<a*b<<" mod "<<b<<endl;
	cout<<(a*b)%m;
		cout<<b<<" is not multiplicative inverse of "<<a<<" in mod "<<m<<endl;
	}
}
int main(){
	int a,b,m;
	cout<<"<a*b> mod m"<<endl;
	cout<<"Enter the value of 'a'"<<endl;
	cin>>a;
	cout<<"Enter the value of 'b'"<<endl;
	cin>>b;
	cout<<"Enter the value of 'm'"<<endl;
	cin>>m;
	cout<<"<"<<a<<"*"<<b<<">"<<" mod "<<m<<endl;
	mul_inverse(a,b,m);
	cout<<"\nName:Aadarsha Bhattarai\tRoll no:1";
	return 0;
}
