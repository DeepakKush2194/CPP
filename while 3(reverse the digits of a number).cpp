#include <iostream>
using namespace std;

int main()
{ //reverse the digits of a number
	int number, reverseNumber = 0;
	cout << "Number: ";
	cin >> number;

	while (number != 0)
	{
		reverseNumber *= 10;
		//int lastDigit = number % 10;
		reverseNumber += number % 10;
		number /= 10;
	}
	cout << "Reverse: " << reverseNumber;

	return 0;
}