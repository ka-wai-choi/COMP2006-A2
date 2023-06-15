#include <iostream>
#include <stdio.h>

using namespace std;

int main() {
    int number;

    // Ask user for input
    cout << "Enter a number: " <<endl;
    cin >> number;

    // Check if the input is odd or even
    if (number % 2 == 0) {
        cout << "The input is even" << endl;

        // Transform the even input into an odd output5
        
        number += 1;
        cout << "The odd output is: " << number << endl;
    } else {
        cout << "The input is odd" << endl;

        // Transform the old input into an even output
        number += 1;
        cout << "The even output is: " << number << endl;
    }

    return 0;
}
