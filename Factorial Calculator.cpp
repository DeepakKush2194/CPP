#include <iostream>
using namespace std;

int main(){
	int num,i;
	cout << "Factorial Calculator" << endl;
	cout << "------------------------" << endl;
	cout << "Enter a number : ";
	cin >> num;
	
	int factorial = 1; // Initialize factorial to 1
	
	for (i = 1; i <= num; i++) {
        factorial *= i; // Calculate factorial
    }

    cout << "Factorial of " << num << " is " << factorial;
	
	return 0;
}