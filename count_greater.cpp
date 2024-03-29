#include <iostream>
#include <vector>
using namespace std;
//Q. Count strictly greater than x.
int main(){
    vector<int> v(6);
    v = {1,3,2,5,3,2};
    
    //for(int i=0;i<6;i++){
//        cin>>v[i];
//    }
    
    cout<<"Enter x: ";
    int x;
    cin>>x;
    
    int great = -1;
    for(int i=0;i<6;i++){
        if(v[i] > x){
            great+=1;
        }
    }
    
    
    cout<<great+1;
    return 0;
}