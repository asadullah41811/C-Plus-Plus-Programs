//write a program  to reverse a number 
#include<iostream>
using namespace std;
 int main()
 {
 	 int number , rem=0;
 	 cout<<" Enter the number ::";
 	 cin>>number;
 	  while( number >0)
 	  {
 	  	rem =(rem *10 )+ number%10;
 	  	 number= number /10;
 	  	 
 	  	   
	   }
	   cout<<"  Reverse number\n:"<<rem;
	   return 0;
 }
