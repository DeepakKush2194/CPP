#include <iostream>
using namespace std;

//Target Sum for pair of digits

int main(){
    int arr[]={3,4,6,7,1};
    int targetSum = 6;
    
    int size = 5;
    
    int pairs = 0;
    
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(arr[i]+arr[j]==targetSum)
                pairs++;
        }
    }
    cout<<"Pairs : "<<pairs;
    
    return 0;
}