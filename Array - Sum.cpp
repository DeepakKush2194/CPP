#include <iostream>
using namespace std;

int main() {
    // Declare and initialize an array of integers
    int myArray[] = {5, 10, 15, 20, 25};
    
    // Calculate the sum of elements in the array using a loop
    int sum = 0; // Initialize sum outside the loop

    for(int i = 0; i < 5; i++) {
        sum += myArray[i];
    }

    // Display the sum
    cout << "Sum of the elements of the array is " << sum << endl;
    
    return 0;
}
