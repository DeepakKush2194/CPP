#include <iostream>
using namespace std;

void showMenu(){
    cout<<"**********Menu**********\n";
    cout<<"1.Check balance\n";
    cout<<"2.Deposit\n";
    cout<<"3.Withdraw\n";
    cout<<"4.Exit\n";
    cout<<"************************\n";
}

int main() {
    //Check balance, deposit, withdraw, show menu
    int option, balance=500, depositAmount, withdrawAmount;
    do{
    showMenu();
    cout<<"Choice: ";
    cin>>option;
    system("cls");
    switch(option){
        case 1:
            cout<<"Balance is $"<<balance<<"."<<endl;break;
        case 2:
            cout<<"Deposit amount: ";
            cin>>depositAmount;
            balance += depositAmount;
            break;
        case 3:
            cout<<"Withdraw amount: ";
            cin>>withdrawAmount;
            if(withdrawAmount <= balance)
                balance -= withdrawAmount;
            else
                cout<<"Not Enough Money!"<<endl;
            break;
    }
    }while(option != 4);
    
    return 0;
}
