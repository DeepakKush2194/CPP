#include <iostream>
using namespace std;

int main()
{
    float s1, s2, s3;
    cout << "Enter sides: ";
    cin >> s1 >> s2 >> s3;
    if (s1 == s2 & s2 == s3)
        cout << "Equilateral triangle.";
    else if (s1 == s2 | s2 == s3 | s3==s1)
        cout << "Isosceles triangle.";
    else
        cout << "Scaline Triangle.";

    return 0;
}