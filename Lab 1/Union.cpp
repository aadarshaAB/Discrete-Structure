#include<iostream>
using namespace std;
void getUnion(int set1[10],int set2[10],int set3[10],int m,int n,int ch)
{
	int i,j;
	int flag,k=0;
	switch(ch)
	{
		//for Union
		case 1:
			{
				for(i=0;i<m;i++)
				{
					set3[k]=set1[i];
					k++;
				}
			}
			for(i=0;i<n;i++)
			{
				flag=0;
				for(j=0;j<m;j++)
				{
					if(set2[i]==set3[j])
					{
						flag=1;
						break;
					}
				}
				if(flag==0)
				{
					set3[k]=set2[i];
					k++;
				}
			}
			cout<<"\nElement of Union set:<";
			for(i=0;i<k;i++)
			{
				cout<<set3[i]<<",";
			}
			cout<<">";
			break;
		case 2:
			{
				for(i=0;i<n;i++)
				{
					flag=0;
					for(j=0;j<m;j++)
					{
						if(set2[i]==set1[j])
						{
							flag=1;
							break;
						}
					}
					if(flag==1)
					{
						set3[k]=set2[i];
						k++;
					}
				}
			cout<<"\nElement of Intersection set:<";
			for(i=0;i<k;i++)
			{
				cout<<set3[i]<<",";
			}
			cout<<">";
			break;
			}
	}
cout<<"\nName:Aadarsha Bhattarai\nRoll No.:1";
}
int main()
{
int set1[10],set2[10],set3[10],m,n,i,j;
int ch;
cout<<"Enter no. of elements in first set:\n";
cin>>m;
cout<<"Enter the elements:\n";
for(i=0;i<m;i++)
{
	cin>>set1[i];
}
cout<<"Enter no. of elements in second set:\n";
cin>>n;
cout<<"Enter the elements:\n";
for(j=0;j<n;j++)
{
	cin>>set2[j];
}
cout<<"\nOperation to perform:\n1=Union\n2=Intersection\n";
cin>>ch;
getUnion(set1,set2,set3,m,n,ch);
}
