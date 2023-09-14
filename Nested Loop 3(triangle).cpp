#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int length;
	cout << "Length: ";
	cin >> length;
	char symbol;
	cout << "Symbol: ";
	cin >> symbol;

	for (int i = 1; i <= length; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			cout << setw(3) << symbol;
		}
		cout << endl;
	}
	cout << "\nReversed Triangle\n"
		 << endl;
	//for (int i = length; i >= 1; i--)
	//{
	//	for (int j = i; j >= 1; j--)
	//	{
	//		cout << setw(3) << symbol;
	//	}
	//	cout << endl;
	//}
	for (int i = length; i >= 1; i--)
	{
		for (int j = 1; j <= i; j++)
		{
			cout << setw(3) << symbol;
		}
		cout << endl;
	}

	return 0;
}