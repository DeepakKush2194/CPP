#include <iostream>
using namespace std;
//STL templates - Generic functions and classes
//A generic template holds the data-type of any data

template <typename T>
class calculator
{
  public:
    T add(T a, T b)
    {
        return a + b;
    }

    T subtract(T a, T b)
    {
        return a - b;
    }

    T multiply(T a, T b)
    {
        return a * b;
    }

    T divide(T a, T b)
    {
        if (b == 0)
        {
            cout << "Error: Divide by zero!!" << endl;
            return 0;
        }
        return a / b;
    }
};

int main()
{
    calculator<int> intcal;
    cout << intcal.add(5, 8) << endl;
    cout << intcal.subtract(5, 8) << endl;
    cout << intcal.multiply(5, 8) << endl;
    cout << intcal.divide(5, 0) << endl;

    calculator<float> floatcal;
    cout << floatcal.add(5.5, 8.4) << endl;
    cout << floatcal.subtract(5.5, 8.4) << endl;
    cout << floatcal.multiply(5.5, 8.4) << endl;
    cout << floatcal.divide(5.5, 8.4) << endl;

    return 0;
}