#include <iostream>
using namespace std;

// Function prototype for the fact function
int fact(int value);

int main() {
    int num;
    cout << "Factorial Calculator" << endl;
    cout << "------------------------" << endl;
    cout << "Enter a number : ";
    cin >> num;

    int result = fact(num); // Call the fact function and store the result

    cout << "Factorial of " << num << " is " << result << endl;

    return 0;
}

// Function to calculate factorial
int fact(int value) {
    int factorial = 1;
    for (int i = 1; i <= value; i++) {
        factorial *= i;
    }
    return factorial; // Return the result
}
