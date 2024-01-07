#include <iostream>
using namespace std;
int main() {
    int i,j,rows;
    
    cout<<"\tInverted Pyramid\t"<<endl;
    cout<<"How many rows are there: ";
    cin>>rows;
    cout<<"Result: "<<endl;
    for(i=rows;i>0;i--){ //rows
        for(j=0;j<i;j++){ //columns
            cout<<"\t*";
        }
        cout<<endl;
    }

    return 0;
}
