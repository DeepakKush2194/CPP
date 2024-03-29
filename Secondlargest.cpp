#include <iostream>
using namespace std;
// Second largest number

//int largestNumber(int array[], int size){
//    int max = INT_MIN;
//    int max_index;
//    for(int i=0;i<size;i++){
//        if(array[i]>max){
//            max = array[i];
//            max_index = i;
//        }
//    }
//    return max_index;
//}

int secondMax(int array[],int size){
    int max=INT_MIN;
    int second_max=INT_MIN;
    
    for(int i=0;i<size;i++){
        if(array[i]>max){
            max=array[i];
        }
    }
    
    for(int i=0;i<size;i++){
        if(array[i]>second_max && array[i]!=max){
            second_max=array[i];
        }
    }
    return second_max;
}
    
int main(){
    int arr[] = {2,7,6,5,7};
    int n = 5;
    
    //int largest = largestNumber(arr, n);
//    cout<<arr[largest]<<endl;
//    //arr[largest]=-1;
//    int largestElement = arr[largest];
//    for(int i=0;i<n;i++){
//        if(arr[i]==largestElement){
//            arr[i]=-1;
//        }
//    }
//    
//    int Secondlargest = largestNumber(arr, n);
//    cout<<arr[Secondlargest];

    cout<<secondMax(arr, n);
    
    return 0;
}