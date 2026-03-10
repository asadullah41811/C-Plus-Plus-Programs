#include<iostream>
using namespace std;
 int main()
 {
 	int n;
 	cout<<" Enter the row of the triangle ::"<<endl;
 	cin>>n;
 	for( int i=1;i<=n;i++)
 	
	 {
	 	for ( int b=1;b<=n-i;b++)
	 	{
	 		cout<<" ";
		 }
//		 cout<<endl;
		 for(int j=1;j<=i;j++)
		 {
		 	cout<<"*";
		 	
		 }
		 cout<<"\n";
 	
	 }
 return 0;
 }

