#include<iostream>
using namespace std;
int main()
{
	int matrix1[10][10],matrix2[10][10],matrix3[10][10];
	int r1,c1,r2,c2;
	int i,j;
	cout<<"Enter order of 1st Matix:";
	cin>>r1>>c1;
	cout<<"ENter element of 1st Matrix(*Only in 1 0 form)"<<endl;
	for(i=1;i<=r1;i++)
	{
		for(j=1;j<=c1;j++)
		{
			cin>>matrix1[i][j];
		}
	}
		cout<<"Enter order of 2nd Matix:";
	cin>>r2>>c2;
	cout<<"Enter element of 2nd Matrix(*Only in 1 0 form)"<<endl;
	for(i=1;i<=r2;i++)
	{
		for(j=1;j<=c2;j++)
		{
			cin>>matrix2[i][j];
		}
	}
	if(r1==r2 && c1==c2)
	{
	 	for(i=1;i<=r1;i++)
	{
		for(j=1;j<=c1;j++)
		{
			matrix3[i][j]=matrix1[i][j]||matrix2[i][j];
		}
	}	
	cout<<"The Join of two matrices:"<<endl;
	{
	 	for(i=1;i<=c1;i++)
	{
		for(j=1;j<=r1;j++)
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

