#include<iostream>
using namespace std;
void cartpro(int set1[10],int set2[20],int m,int n)
{
	int i,j;
	cout<<"\nThe cartesian Product:<";
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			cout<<"("<<set1[i]<<","<<set2[j]<<"),";
//			printf("(%d,%d),",set1[i],set2[j]);
		}
	}
		cout<<">";

}
int main()
{
	int set1[10],set2[10],m,n,i,j;
	cout<<"Enter no. of elements in first set:\n";
	cin>>m;
	cout<<"Enter the elements :\n";
	for(i=0;i<m;i++)
	{
		cin>>set1[i];
	}
	cout<<"Enter no. of elements in second set:\n";
	cin>>n;
	cout<<"Enter the elements :\n";
	for(j=0;j<n;j++)
	{
		cin>>set2[j];
	}	
cartpro(set1,set2,m,n);
cout<<"\nName:Aadarsha Bhattarai\nRoll No.:1";
}
