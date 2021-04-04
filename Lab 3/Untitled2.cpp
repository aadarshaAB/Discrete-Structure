#include<iostream>
using namespace std;
int fact(int n)
{
	if n==1
	return 1;
	else
	return n*fact(n-1);
}
int main()
{
	int num;
	cout<<"Enter number to compute Factorial:"<<endl;
	cin>>num<<endl;
	cout<<"The factorial of "<<num<<"\t="<<fact(num);
	return 0;	
}
