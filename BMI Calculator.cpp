#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int weight;
    double height, BMI;
    cout << "BMI Calculator" << endl;
    cout << "---------------------------" << endl;
    cout << "Enter your weight (in Kg) : ";
    cin >> weight;
    cout << "Enter your height (in m) : ";
    cin >> height;

    // Calculate BMI
    BMI = weight / pow(height, 2);

    cout << "Your BMI is " << BMI << endl;

    // Interpret the BMI
    if (BMI < 18.5) {
        cout << "You are underweight." << endl;
    } else if (BMI < 25) {
        cout << "You have a normal weight." << endl;
    } else if (BMI < 30) {
        cout << "You are overweight." << endl;
    } else {
        cout << "You are obese." << endl;
    }

    return 0;
}
