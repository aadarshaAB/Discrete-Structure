#include<iostream>
using namespace std;
int fact(int n)
{
	if (n==1)
	{
	return 1;
	}
	else
	{
	return n*fact(n-1);
	}
}
int main()
{
	int num;
	cout<<"Enter number to compute Factorial:"<<endl;
	cin>>num;
	cout<<"The factorial of "<<num<<"="<<fact(num);
	cout<<"\nName:Aadarsha Bhattarai\tRoll no,:1";
	return 0;	
}
