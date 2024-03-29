#include <iostream>
#include <vector>
using namespace std;
//Q. Last occurance of element x in array
int main(){
    vector<int> v(6);
    v = {1,3,2,5,3,2};
    
    //for(int i=0;i<6;i++){
//        cin>>v[i];
//    }
    
    cout<<"Enter x: ";
    int x;
    cin>>x;
    
    int occurance = -1;
    //for(int i=0;i<6;i++){
//        if(v[i] == x){
//            occurance=i;
//        }
//    }
    
    for(int i=v.size()-1;i>=0;i--){
        if(v[i] == x){
            occurance=i;
            break;
        }
    }
    cout<<occurance+1;
    return 0;
}