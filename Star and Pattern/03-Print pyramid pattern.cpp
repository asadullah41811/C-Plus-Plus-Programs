#include<iostream>
using namespace std;
 int main()
 {
 	
 	int n;
 	cout<<" Enter the pymraid rows::"<<endl;
 	cin>>n;
 	for( int i=1;i<=n;i++)
 	{
 		for ( int b=1;b<=n-i;b++)
 		{
 			cout<<" ";
 			
		 }
		 for(int j=1;j<=2*i-1;j++)
		 {
		 	 cout<<"*";
		 }
		 cout<<"\n";
	 }
 return 0;
 }

