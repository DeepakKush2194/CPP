#include <iostream>
using namespace std;

int main(){
	double num1, num2, res;
	int option;
	cout << "Calculator" << endl;
    cout << "------------------------" << endl;
    cout << "Enter any two numbers : ";
    cin >> num1>>num2;
    cout<<"Press 1 - Add 2 - Subtract 3 - Multiply 4 - Divide"<<endl;
    cin>>option;
    
    switch (option )
    {
    	case 1:
    		res = num1 + num2;
    		cout<<"Sum is "<<res;
    		break;
    	case 2:
    		res = num1 - num2;
    		cout<<"Difference is "<<res;
    		break;
    	case 3:
    		res = num1 * num2;
    		cout<<"Product is "<<res;
    		break;
    	case 4:
    		res = num1 / num2;
    		cout<<"Quotient is "<<res;
    		break;
    	default:
    		cout<<"Invalid option!";
    }
	
	return 0;
}