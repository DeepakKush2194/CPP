#include <iostream>
#include <cmath>
using namespace std;

int main(){
	double r;
	const double PI = 3.14;
	cout<<"Circle Area Calculator"<<endl;
	cout<<"------------------------"<<endl;
	cout<<"Enter radius : ";
	cin>>r;
	double area = PI * pow(r,2);
	cout<<"Area of the circle is "<<area;
	
	return 0;
}