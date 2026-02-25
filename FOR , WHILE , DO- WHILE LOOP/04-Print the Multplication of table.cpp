//Write a program to multiplication  table of number 

#include<iostream>
using namespace std;
 int main()
 {
 	int number;
 	cout<<" Enter the number"<<endl;
 	cin>>number;
 	cout<<" Multiplication of the table::"<<number<<endl;
 	
 	for ( int i=1;i<10;i++)
 	{
 		cout<<number <<" x" <<i<<" = "<<number*i<<endl;
 		
	 }
	 return 0;
  }
