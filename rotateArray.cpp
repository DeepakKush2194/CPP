#include <iostream>
#include <vector>
using namespace std;
// Rotate an array of size 'n' by 'k' steps,
// k is a non-negative (k >= n)

int main(){
    //method 2 (No Extra Memory)
    vector<int> v={1,2,3,4,5};
    
    int k=3;
    k=k%v.size();
    
    reverse(v.begin(),v.end());
    reverse(v.begin(),v.begin()+k);
    reverse(v.begin()+k,v.end());
    for(int a:v)
        cout<<a<<" ";
    
    //method 1
    //int array[]={1,2,3,4,5};
//    int n=5;
//  
//    int k=3;
//    
//    k=k%n;
//    int newarray[n];
//    int j=0;
//    for(int i=n-k;i<n;i++)
//        newarray[j++]=array[i];
//        
//    for(int i=0;i<=k;i++)
//        newarray[j++]=array[i];
//        
//    for(int i=0;i<n;i++)
//        cout<<newarray[i]<<" ";
    
    return 0;
}