#include <iostream>
using namespace std;

int main()
{
	int year;
	cout << "Leap Year Checker" << endl;
	cout << "------------------------" << endl;
	cout << "Enter a year : ";
	cin >> year;

	if (year % 4 == 0)
	{
		if(year % 400 == 0)
		{
			cout<<"LEAP YEAR";
		}
		else{
			cout<<"NOT A LEAP YEAR";
		}
	}
	
	
	return 0;
}