#include <iostream>

using namespace std;

int main()
{
    char ch;
    cout << "Enter an alphabet: ";
    cin >> ch;
    if (ch == 'a', ch == 'e', ch == 'i', ch == 'o', ch == 'u')
        cout << "By if-else,    It is a vowel." << endl;
    else
        cout << "By if-else,    Not a vowel." << endl;

    if (ch == 'a')
        cout << "By else-if,    It is a vowel." << endl;
    else if (ch == 'e')
        cout << "By else-if,    It is a vowel." << endl;
    else if (ch == 'i')
        cout << "By else-if,    It is a vowel." << endl;
    else if (ch == 'o')
        cout << "By else-if,    It is a vowel." << endl;
    else if (ch == 'u')
        cout << "By else-if,    It is a vowel." << endl;
    else
        cout << "By else-if,    Not a vowel." << endl;

    switch (ch)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
        cout << "From switch,    It is a vowel." << endl;break;
    default:
        cout << "From switch,    Not a vowel."<<endl;
    }

    return 0;
}