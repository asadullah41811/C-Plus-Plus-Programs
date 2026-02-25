#include<iostream>
using namespace std;
 int main()
 {
 	int n, x,y,z,count;
 	cout<<" Enter the no of term to generate Fibonacci series::"<<endl;
 	cin>>n;
 	x=0;
 	y=1;
 	z=0;
 	for(count=0;count<=n;count++)
 	{
 		cout<<" "<<z<<endl;
 		x=y;
 		y=z;
 		z=x+y;
 		
	 }
	 
	 return 0;
 }
