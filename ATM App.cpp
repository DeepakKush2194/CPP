#include <iostream>
using namespace std;

void showMenu(){
    cout<<"********Menu********"<<endl;
    cout<<"1. Check Blance"<<endl;
    cout<<"2. Deposite"<<endl;
    cout<<"3. Withdraw"<<endl;
    cout<<"4. Exit"<<endl;
    cout<<"********************"<<endl;
}
int main() {
    int ch,balance = 500, depositAmount, withdrawAmount;
    
    do{
        showMenu();
        
        cout << "Choice: ";
        cin>>ch;
        switch(ch){
        case 1:
            cout<<"Balance is $"<< balance <<"."<<endl;
            break;
        case 2:
            cout<<"Deposit Amount: $";
            cin>>depositAmount;
            balance += depositAmount;
            cout<<"Amount deposited successfully."<<endl;
            break;
        case 3:
            cout<<"Withdraw Amount: $";
            cin>>withdrawAmount;
            if(withdrawAmount <= balance){
                balance -= withdrawAmount;
                cout<<"Amount withdrawn successfully."<<endl;
                if(balance == 0)
                    cout<<"Balance is ZERO now!!!!!"<<endl;
            }
            else
                cout<<"Not Enough!!"<<endl;
            break;
        }
    }
    while(ch != 4);

    return 0;
}
