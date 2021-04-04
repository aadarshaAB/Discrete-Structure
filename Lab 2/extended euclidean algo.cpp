#include<iostream>
using namespace std;
int extend_euclidean(int a,int b,int &gcd,int &x_value,int &y_value){
	int old_x=1,x=0;
	int old_y=0,y=1;
	int q,r,temp;
	while(b!=0){
		q=a/b;
		r=a%b;
		temp=x;
		x=old_x-(q*x);
		old_x=temp;
		temp=y;
		y=old_y-(q*x);
		old_y=temp;
		a=b;
		b=r;
		
	}
	x_value=old_x;
	y_value=old_y;
	gcd=a;
}  
int main()
{
	 int x,y,a,b,gcd;
	 cout<<"Enter the value of 'a' and 'b' of equation ax+by=gcd(a,b)"<<endl;
	 cin>>a>>b;
	 extend_euclidean(a,b,gcd,x,y);
	 cout<<"gcd("<<a<<","<<b<<")"<<"="<<gcd<<",x="<<x<<",y="<<y<<endl;
	 cout<<"\nName:Aadarsha Bhattarai\tRoll no:1";
	 return 0;
}
