#include <iostream>
using namespace std;

int main()
{
	int n; // Declare an integer variable to store the number of terms
	cout << "Fibonacci Sequence Generator" << endl;
	cout << "---------------------------" << endl;
	cout << "Enter the number of terms: ";
	cin >> n;

	int term1 = 0, term2 = 1, nextTerm; // Initialize the first two terms

	cout << "Fibonacci Sequence:" << endl;

	// Special case: Handle the first two terms separately
	if (n >= 1)
	{
		cout << term1 << " ";
	}
	if (n >= 2)
	{
		cout << term2 << " ";
	}

	// Generate and display the remaining terms
	for (int i = 3; i <= n; i++)
	{
		nextTerm = term1 + term2;
		cout << nextTerm << " ";
		term1 = term2;
		term2 = nextTerm;
	}
	return 0;
}