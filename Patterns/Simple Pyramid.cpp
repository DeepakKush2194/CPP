#include <iostream>
using namespace std;
int main() {
    int i,j,rows;
    
    cout<<"\tSimple Pyramid\t"<<endl;
    cout<<"How many rows are there: ";
    cin>>rows;
    cout<<"Result: "<<endl;
    for(i=0;i<rows;i++){ //for rows
        for(j=0;j<i;j++){ //for columns
            cout<<"\t*";
        }
        cout<<endl;
    }

    return 0;
}
