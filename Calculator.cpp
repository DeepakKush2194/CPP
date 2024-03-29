#include <iostream>
using namespace std;

int main()
{
    float num1, num2, result;
    int choice;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    cout << "Operation:\n1- Add\n2- Subtract\n3- Multiply\n4- Divide\n";
    cout << "Choice: ";
    cin >> choice;

    switch (choice)
    {
    case 1:
        result = num1 + num2;
        cout << "Result is " << result;
        break;
    case 2:
        result = num1 - num2;
        cout << "Result is " << result;
        break;
    case 3:
        result = num1 * num2;
        cout << "Result is " << result;
        break;
    case 4:
        result = num1 / num2;
        cout << "Result is " << result;
        break;
    default:
        cout << "Invalid Choice Entered!!!";
    }

    return 0;
}