#include<iostream>
using namespace std;
int bi_add(int a,int b)
{
int c=0;
while(b!=0){
	 c=(a&b) <<1;
	 a=a^b;
	 b=c;
}	
return a;
}
int bi_sub(int a,int b)
{
	int c=0,b1;
	b1=bi_add(~b,1);
	while(b1!=0){
		c=(a&b1) <<1;
		a=a^b;
		b1=c;
	}
	return a;
}
int main(){
	int n1,n2;
	cout<<"Enter 1st Integer:"<<endl;
	cin>>n1;
	cout<<"Enter 2nd Integer:"<<endl;
	cin>>n2;
	cout<<"The addition:"<<bi_add(n1,n2)<<endl;
	cout<<"The subtractioin: -"<<bi_sub(n1,n2)<<endl;
	cout<<"\nName:Aadarsha Bhattarai Roll no:1";
	return 0;
}
