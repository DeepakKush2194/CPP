#include <iostream>
using namespace std;
//while loop + infinite loop
int main()
{
	//write out all the numbers between 100 - 500 that are divisible by 3 and 5
	int counter = 100;
	while (counter <= 500) //Or counter < 501
	{
		if (counter % 3 && counter % 5)
			cout << counter << " is divisible." << endl;
		counter++; //if we don't give this, the loop will go infinite
	}

	return 0;
}