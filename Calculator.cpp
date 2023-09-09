#include <iostream>
using namespace std;

int main(){
	float num1,num2;
	char operation;
	
	cout<<"**HeckWiz Calculator**"<<endl;
	cin>>num1>>operation>>num2;
	
	switch (operation){
		case '-':
			cout<<num1<<operation <<num2<<"="<<num1-num2;
			break;
		case '+':
			cout<<num1<<operation <<num2<<"="<<num1+num2;
			break;
		case '*':
			cout<<num1<<operation <<num2<<"="<<num1*num2;
			break;
		case '/':
			cout<<num1<<operation <<num2<<"="<<num1/num2;
			break;
		case '%':
			bool isnum1Int, isnum2Int;
				isnum1Int=((int)num1==num1);//5==5.0
				isnum2Int=((int)num2==num2);
				if(isnum1Int && isnum2Int)
					cout<<num1<<operation <<num2<<"="<<(int)num1 % (int)num2;
				else
					cout<<"Not Valid!";
					break;
		default:
			cout<<"Not Valid Operation!"<<endl;
	}
	
	
	return 0;
}
