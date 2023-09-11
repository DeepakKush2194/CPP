#include <iostream>
using namespace std;

int main() {
    int n, i, flag;
    flag = 1;
    cout << "**Prime Number Checker**" << endl;
    cout << "Enter a number: ";
    cin >> n;

    for (i = 2; i <= n / 2; i++) {
        if (n % i == 0) {
            flag = 0;
            break; // No need to continue checking if we already found a divisor.
        }
    }

    if (flag == 0) {
        cout << n << " is not prime.";
    } else {
        cout << n << " is prime.";
    }

    return 0;
}
