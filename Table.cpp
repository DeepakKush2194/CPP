#include <iostream>
using namespace std;

int main() {
    int number;
    
    cout<< "******Table Generator*******"<<endl;
    cout<<"Number: ";
    cin>>number;
    for(int i=2;i<number;i++){
        for(int j=1;j<11;j++){
        cout<<i<<" X "<<j<<" = "<<i*j<<endl;
        }
        cout<<endl;
    }

    return 0;
}
