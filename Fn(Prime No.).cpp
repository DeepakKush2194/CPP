#include <iostream>
using namespace std;

bool isPrimeNumber(int number){
    for(int i=2;i<number;i++){
        if(number % i == 0)
            return false;
    }
    return true;
}

int main() {
    int num;
    cout<<"Number: ";
    cin>>num;
    
    bool isPrimeFlag = isPrimeNumber(num);
    
    if(isPrimeFlag)
        cout<<"Prime Number.";
    else
        cout<<"Not Prime Number.";

    return 0;
}
