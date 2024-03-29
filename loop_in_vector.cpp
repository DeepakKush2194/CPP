#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> v(5);v= {1,2,3,4,5};
    
    //for loop
    //for(int i=0;i<5;i++){
//        int element;
//        cin>>element;
//        v.push_back(element);
//    }
    
    for(int i=0;i<5;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    
    v.insert(v.begin()+2,6);
    
    //for each loop
    for(int ele:v){
        cout<<ele<<" ";
    }
    cout<<endl;
    
    v.erase(v.end()-2);
    
    //while loop
    int idx =0;
    while(idx<v.size()){
        cout<<v[idx++]<<" ";
    }
    return 0;
}