#include<iostream>
using namespace std;
int main()
{
	int matrix1[10][10],matrix2[10][10],product[10][10];
	int row_pro_col;
	int r1,c1,r2,c2;
	int i,j,k;
	cout<<"Enter No. of row and column of 1st Matix:";
	cin>>r1>>c1;
	cout<<"Enter element of 1st Matrix(*Only in 1 0 form)"<<endl;
	for(i=1;i<=r1;i++)
	{
		for(j=1;j<=c1;j++)
		{
			cin>>matrix1[i][j];
		}
	}
		cout<<"Enter No. of row and column of 2nd Matix:";
	cin>>r2>>c2;
	cout<<"Enter element of 2nd Matrix(*Only in 1 0 form)"<<endl;
	for(i=1;i<=r2;i++)
	{
		for(j=1;j<=c2;j++)
		{
			cin>>matrix2[i][j];
		}
	}
 	if(r1==c2){
 		for(i=1;i<=r1;i++)
 		{
 			for(j=1;j<=c2;j++)
 			{
 				for(k=1;k<=c1;k++)
 				{
 					row_pro_col=row_pro_col||(matrix1[i][k]&&matrix2[k][j]);
				 }
				 product[i][j]=row_pro_col;
				 row_pro_col=0;
			 }
		 } 		
	 printf("\nThe matrix after multiplication is:\n");
	for(i=1;i<=r1;i++)
	{
	for(j=1;j<=c2;j++)
	{
				cout<<product[i][j];
			cout<<"\t";
		}
		cout<<"\n";
	}
}
else
{
	cout<<"Enter Valid matrix";
}
	cout<<"\n";
	cout<<"Name:Aadarsha Bhattarai\t\tRoll no:1";
	return 0;	
}
