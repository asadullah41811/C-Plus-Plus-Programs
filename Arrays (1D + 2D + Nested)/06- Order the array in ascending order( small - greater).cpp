
#include <iostream>
 using namespace std;
 

int main() {
    // Write C++ code here
   int arr[10];
   int n;
   cout<<"\n Enter the size of the array::"<<endl;
   cin>>n;
   for( int i=0; i<n;i++)
   {
       cin>>arr[i];
   }
//   sort array in ascending order
for ( int i=0;i<n;i++)
{
    for ( int j=i+1;j<n; j++)
    {
        if( arr[i]>arr[j])
        {
            int temp= arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }
}
cout<<"After sorting the array::"<<endl;
for( int i=0;i<n; i++)
{
    cout<<arr[i]<< "   ";
}
    return 0;
}
