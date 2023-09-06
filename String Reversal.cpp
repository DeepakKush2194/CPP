#include <iostream>
#include <string>
using namespace std;

int main() {
    char str[100];

    cout << "Enter a String: ";
    cin.getline(str, 100); // Read a line of text, including spaces

    int length = strlen(str); // Find the length of the string

    cout << "\nReversed String: ";
    for (int i = length - 1; i >= 0; i--) {
        cout << str[i];
    }

    cout << endl;

    return 0;
}
