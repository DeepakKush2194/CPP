#include <iostream>
using namespace std;

int main() {
    int number;

    cout << "Prime Number Checker" << endl;
    cout << "---------------------------" << endl;
    cout << "Enter a positive integer: ";
    cin >> number;

    // Check for special cases: 0, 1, and negative numbers
    if (number <= 1) {
        cout << number << " is not a prime number." << endl;
    } else {
        // Loop to check for divisors from 2 to the square root of the number
        bool isPrime = true; // Assume it's prime initially

        for (int i = 2; i * i <= number; i++) {
            if (number % i == 0) {
                isPrime = false; // It has a divisor other than 1 and itself
                break;
            }
        }

        // Display the result
        if (isPrime) {
            cout << number << " is a prime number." << endl;
        } else {
            cout << number << " is not a prime number." << endl;
        }
    }

    return 0;
}
