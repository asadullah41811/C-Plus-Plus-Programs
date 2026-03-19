#include<iostream>
using namespace std;
 int main()
 {
 	char str[100]="virtual university of pakistan";
 	char *ptr=str;
 	int length=0;
 	while( *ptr!='\0')
 	{
 		length++;
 		ptr++;
 		
	 }
	 cout<<" The lenght of the string: \t"<<length<<endl;
	 return 0;
 }
