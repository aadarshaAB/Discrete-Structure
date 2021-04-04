#include<iostream>
using namespace std;
void euclidean_Algorithm(int,int);
int main(){
	int r1,r2;
	cout<<"Enter Two numer for GCD calculation:";
	cin>>r1>>r2;
	euclidean_Algorithm(r1,r2);
}
void euclidean_Algorithm(int r1,int r2)
{
	int r1_store,r2_store;
	int r;
	r1_store=r1;
	r2_store=r2;
	while (r2>0)
	{
		r=r1%r2;
		r1=r2;
		r2=r;
	}
	cout<<"The GCD of ("<<r1_store<<","<<r2_store<<") ="<<r1<<endl;
	cout<<"\nName:Aadarsha Bhattarai\tRoll no:1";
}
