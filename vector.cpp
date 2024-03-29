 #include <iostream>
#include <vector>
using namespace std;

// Vectors 
//    - Dynamic Array( Size can be alter later)
//    - Contigous mamory location
// Declaration:
//    vector<data-type>vector-name;
//            OR
//    vector<data-type>vector-name(size);

// Basic operatons: 
//    1. Size
//        v.size() -> gives size(length) of the vector
//    2. Resize
//        v.resize(new size);
//    3. Capacity
//        v.capacity();
//        **capacity >= size
//    4. Add elements
//        v.push_back(element);
//            --add element at End of vector
//        v.insert(position,element);
//            --Position is relative to First/last element
//            --First element -> v.begin()
//            --Last element -> v.end()
//            
//    5. Delete elements
//        v.pop_back();
//            --remove last element
//        v.erase(position)
//            --Position is relative to First/last element
//            eg:
//                v.end()-2;
//                v.begin()+2;
//                
//        v.clear();
//            --delete all elements from vector
//      
//     6. Reverse elements
//          reverse(begin, end);
//    
int main(){
    vector<int> v;
    
    cout<<"Size : "<<v.size()<<endl;
    cout<<"Capacity : "<<v.capacity()<<endl;
    
    v.push_back(1);
    cout<<"Size : "<<v.size()<<endl;
    cout<<"Capacity : "<<v.capacity()<<endl;
    
    v.push_back(2);
    cout<<"Size : "<<v.size()<<endl;
    cout<<"Capacity : "<<v.capacity()<<endl;
    
    v.push_back(3);
    cout<<"Size : "<<v.size()<<endl;
    cout<<"Capacity : "<<v.capacity()<<endl;
    
    v.push_back(4);
    cout<<"Size : "<<v.size()<<endl;
    cout<<"Capacity : "<<v.capacity()<<endl;
    
    v.push_back(5);
    cout<<"Size : "<<v.size()<<endl;
    cout<<"Capacity : "<<v.capacity()<<endl;
    
    v.push_back(6);
    cout<<"Size : "<<v.size()<<endl;
    cout<<"Capacity : "<<v.capacity()<<endl;
    
    v.resize(10);
    cout<<"Size : "<<v.size()<<endl;
    cout<<"Capacity : "<<v.capacity()<<endl;
    
    v.pop_back();
    v.pop_back();
    cout<<"Size : "<<v.size()<<endl;
    cout<<"Capacity : "<<v.capacity()<<endl;
    
    return 0;
}