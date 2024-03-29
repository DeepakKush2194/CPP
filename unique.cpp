#include <iostream>
using namespace std;
// Find a unique number from array
int main(){
    int arr[] = {2,3,1,3,2,4,7,1};
    int size = 8;
    
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(arr[i] == arr[j])
                arr[i] = arr[j] = -1;
        }
    }
    
    cout<<"Unique number : ";
    for(int i=0;i<size;i++){
        if(arr[i] != -1)
            cout<<arr[i]<<" ";
    }
    return 0;
}