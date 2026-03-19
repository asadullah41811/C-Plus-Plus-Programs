#include<iostream>
using namespace std;
int main()
{
	int arr[10]={12,45,25,85,69,36};
	int *p=arr;
	int sum=0;
	for( int i=0;i<10;i++)
	{
		sum+=*(p+i);
		
	}
	cout<<" The sum of the array is: \t"<<sum<<endl;
	return 0;
}
