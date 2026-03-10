#include<iostream>
using namespace std;
 int main()
 {
// cout<<" "<<endl;
int rows, cols;
 cout<<" enter the rows of checkboard ::"<<endl;
 cin>>rows;
 cout<<"enter the cols of checkboard::"<<endl;
 cin>>cols;
// size of the checkboards
 


   

    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            // condition for checkerboard pattern
            if((i + j) % 2 == 0)
                cout << "* ";
            else
                cout << "# ";
        }
        cout << endl;
    }

    return 0;
}

