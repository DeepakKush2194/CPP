#include <iostream>
using namespace std;

// Function prototype for the pow function
int pow(int base, int expo);

int main() {
    int num1, num2;
    cout << "Power Function" << endl;
    cout << "------------------------" << endl;
    cout << "Enter the base number : ";
    cin >> num1;
    cout << "Enter the power : ";
    cin >> num2;
    
    int result = pow(num1, num2);
    
    cout << "\n\nResult is " << result << endl;
    
    return 0;
}

// Function to calculate power
int pow(int base, int expo) {
    int result = 1; // Initialize result to 1

    for (int i = 1; i <= expo; i++) {
        result *= base;
    }

    return result; // Return the result
}
