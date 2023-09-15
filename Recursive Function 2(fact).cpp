#include <iostream>
using namespace std;

int recursive_fact(int m, int n){
    if(m == n)
        return m;
    return m * recursive_fact(m+1, n);
}

int main() {
    //Factorial of number between m and m with using recursive function
    int m=2, n=5, fact;
    // cout<< m <<" - "<< n << endl;
    // for(int i=m;i<=n;i++){
    //     fact *= i;
    // }
    fact = recursive_fact(m,n);
    cout<<fact;
    
    return 0;
}
