#include<iostream>
using namespace std;
int join_bool_matrix(int,int);
int main()
{
	int matrix1[10][10],matrix2[10][10],matrix3[10][10];
	int r1,c1,r2,c2;
	int i,j;
	cout<<"Enter order of 1st Matix:";
	cin>>r1>>c1;
	cout<<"Enter element of 1st Matrix"<<endl;
	for(i=1;i<=r1;i++)
	{
		for(j=1;j<=c1;j++)
		{
			cin>>matrix1[i][j];
		}
	}
		cout<<"Enter order of 2nd Matix:";
	cin>>r2>>c2;
	cout<<"Enter element of 2nd Matrix()"<<endl;
	for(i=1;i<=r2;i++)
	{
		for(j=1;j<=c2;j++)
		{
			cin>>matrix2[i][j];
		}
	}
	if(r1==r2 && c1==c2)
	{
	 	for(i=1;i<=r2;i++)
	{
		for(j=1;j<=c2;j++)
		{
			matrix3[i][j]=matrix1[i][j]&&matrix2[i][j];
		}
	}	
	cout<<"The Meet of two matrices:"<<endl;
	{
	 	for(i=1;i<=r2;i++)
	{
		for(j=1;j<=c2;j++)
		{
			cout<<matrix3[i][j];
			cout<<"\t";
		}
		cout<<"\n";
	}	
	}
	}
	else
	cout<<"Invalid!Enter same row and coloumn."<<endl;
	cout<<"\n";
	cout<<"Name:Aadarsha Bhattarai\tRoll no:1";
	return 0;	
}

