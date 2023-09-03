#include <iostream>
using namespace std;

int main(){
	int temp;
	cout<<"Temperature Converter"<<endl;
	cout<<"------------------------"<<endl;
	cout<<"Enter temp. in (°C) : ";
	cin>>temp;
	double fahrenheit = (temp * 9/5) + 32;
	cout<<temp<<"°C in Fahrenheit is "<<fahrenheit<<"°F";
	
	return 0;
}