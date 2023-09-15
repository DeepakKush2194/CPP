#include <iostream>
using namespace std;

int recursive_sum(int m, int n){
    if(m == n)
        return m;
    return m + recursive_sum(m+1, n);
}

int main() {
    //Sum between m and m with using recursive function
    int m=2, n=10, sum;
    // cout<< m <<" - "<< n << endl;
    // for(int i=m;i<=n;i++){
    //     sum += i;
    // }
    sum = recursive_sum(m,n);
    cout<<sum;
    
    return 0;
}
