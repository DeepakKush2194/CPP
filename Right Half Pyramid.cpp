#include <iostream>
using namespace std;

int main() {
    int rows;
    cout << "Number Pyramid Generator" << endl;
    cout << "---------------------------" << endl;
    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Your Pyramid:" << endl;

    for (int i = 1; i <= rows; i++) { // Loop for each row
        for (int j = 1; j <= i; j++) { // Loop to print numbers
            cout << i << " ";
        }
        cout << endl; // Move to the next line after each row
    }

    return 0;
}
