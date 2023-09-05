#include <iostream>
using namespace std;

int main() {
    int myArray[] = {12, 6, 23, 45, 8, 56, 31, 75};
    int largest = myArray[0];

    for (int i = 1; i < 8; i++){
        if (myArray[i] > largest) {
            largest = myArray[i];
        }
    }

    // Display the largest element
    cout << "The largest element in the array is: " << largest << endl;

    return 0;
}
