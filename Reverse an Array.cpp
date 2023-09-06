#include <iostream>
using namespace std;

int main() {
    int a[6] = {1, 2, 3, 4, 5, 6}, b[6];
    int i, j = 0; // Initialize j to 0
    
    for (i = 5; i >= 0; i--){
        b[j] = a[i];
        j++;
    }
    
    cout << "Reversed array: \n";
    
    for (j = 0; j < 6; j++) {
        cout << b[j] << endl;
    }
    
    return 0;
}
