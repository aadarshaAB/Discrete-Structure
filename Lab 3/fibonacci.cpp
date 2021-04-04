#include<iostream>
using namespace std;
int fib(int n)
{
	if (n==1)
	return 0;
	else if(n==2)
	return 1;
	else
	return fib(n-1)+fib(n-2);
}
int main()
{
	int num,i;
	cout<<"Enter Number of terms for Fibonnaci Sequence:\t"<<endl;
	cin>>num;
	cout<<"The Sequence is\n"<<endl;
	for(i=1;i<=num;i++)
	{
	cout<<fib(i)<<"\t";	
	}
	cout<<"\nName:Aadarsha Bhattarai\tRoll no,:1";
	return 0;
}
