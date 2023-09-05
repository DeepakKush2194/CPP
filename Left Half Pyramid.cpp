#include <iostream>
using namespace std;

int main(){
	int rows,i,j,s;
	cout << "Number Pyramid Generator" << endl;
	cout << "---------------------------" << endl;
	cout << "Enter the number of rows: ";
	cin>>rows;
	cout<<"Your Pyramid"<<endl;
	for(int i=0;i<rows;i++){
		for(int s=0;s < 2 * (rows - i) - 1;s++){
			cout<<" ";
		}
		for(int j=0;j<=i;j++){
			cout<<"* ";
		}
		cout<<endl;
	}
	
	return 0;
}#include <iostream>
using namespace std;

int main() {
    int rows;

    cout << "Number Pyramid Generator" << endl;
    cout << "---------------------------" << endl;
    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Your Pyramid" << endl;

    for (int i = 0; i < rows; i++) {
        // Print leading spaces
        for (int s = 0; s < 2 * (rows - i) - 1; s++) {
            cout << " ";
        }
        
        // Print asterisks and spaces in the current row
        for (int j = 0; j <= i; j++) {
            cout << "* ";
        }
        
        cout << endl;
    }

    return 0;
}
