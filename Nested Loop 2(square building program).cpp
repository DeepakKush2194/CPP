#include <iostream>
#include <iomanip>
//for formatting
using namespace std;

int main()
{
	int length, width;
	char symbol;
	cout << "Length: ";
	cin >> length;
	cout << "Width: ";
	cin >> width;
	cout << "Symbol: ";
	cin >> symbol;

	for (int l = 0; l < length; l++)
	{
		for (int w = 0; w < width; w++)
		{
			cout << setw(3) << symbol;
		}
		cout << endl;
	}
	return 0;
}