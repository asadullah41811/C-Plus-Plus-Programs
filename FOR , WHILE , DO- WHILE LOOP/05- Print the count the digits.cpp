#include <iostream>
using namespace std;

int main() {
    long long  number; 
	int count = 0;
    cout << "Enter a number: ";
    cin >> number;

    // Handle negative numbers
    if (number < 0) {
        number = -number;
    }

    // Special case for 0
    if (number == 0) {
        count = 1;
    } else {
        while (number > 0) {
            number = number / 10;  // Remove last digit
            count++;                // Increase digit count
        }
    }

    cout << "Number of digits: " << count << endl;
    return 0;
}

