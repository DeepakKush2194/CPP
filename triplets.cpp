#include <iostream>
using namespace std;

//Target Sum for triplets of digits

int main(){
    int arr[]={3,1,2,4,0,6};
    int targetSum = 7;
    
    int size = 6;
    
    int triplets = 0;
    
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            for(int k=j+1;k<size;k++){
                if(arr[i]+arr[j]+arr[k]==targetSum)
                    triplets++;
            }
        }
    }
    cout<<"Triplets : "<<triplets;
    
    return 0;
}