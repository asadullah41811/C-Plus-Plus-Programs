//write a program to printing the EVEN number using the loop
#include<iostream>
using namespace std;
int main()
{
	int num;
	cout<<" Enter the number :"<<endl;
	cin>>num;
	for ( int i=0;i<num;i++)
	{
		 if ( i %2==0)
		 {
		 	cout <<i<<" "<<endl;
		 	
		 }
		 
	}
	return 0;
}
