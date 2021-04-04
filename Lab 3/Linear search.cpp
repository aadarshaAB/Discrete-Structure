#include<iostream>
using namespace std;
int linear_search(int array[],int num)
{
	int i=0;
	for(i=0;i<
	num;i++)
	{
		if(array[i]==num)
		{
		 	cout<<"\nThe Number "<<num<<" at Index:"<<i;
		 	break;
		}
	}
	if(i==num)
		{
			cout<<"\nSorry!The number is not in Array"<<endl;
		}
	}
int main()
{
	int array[10]={2,45,69,56,37,84,99,26,16,72};
	int num;
	cout<<"Enter Number to search:";
	cin>>num;
	linear_search(array,num);
	cout<<"\nName:Aadarsha Bhattarai\tRoll no,:1";
}

	
	
	
	
	
	
	
	

