#include <iostream>
using namespace std;

int main() {
    int a[10] = {12, 23, 34, 45, 56, 67, 78, 89, 10, 99};
    int num, found = -1; // Initialize found to -1 to indicate not found

    cout << "Search in Array" << endl;
    cout << "Enter element: ";
    cin >> num;

    for (int j = 0; j < 10; j++) {
        if (a[j] == num) {
            found = j; // Store the position and break the loop
            break;
        }
    }

    if (found != -1) {
        cout << "Element found at position " << found + 1 << endl;
    } else {
        cout << "Element not found in the array." << endl;
    }

    return 0;
}
