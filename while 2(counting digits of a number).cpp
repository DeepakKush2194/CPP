#include <iostream>
using namespace std;

int main()
{
	//counting digits of a number
	int number;
	cout << "Number : ";
	cin >> number;

	if (number == 0)
	{
		cout << "You entered 0.\n";
	}
	else
	{
		if(number < 0){
			number = -1 * number;
		}
		int counter = 0;
		
		while (number > 0)
		{
			number /= 10;
			counter++;
		}
		cout << "Number contains " << counter << " digits.\n";
	}
	return 0;
}