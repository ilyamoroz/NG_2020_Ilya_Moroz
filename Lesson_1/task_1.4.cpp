#include <iostream>

using namespace std;

int main()
{
    int a, b, c;
    cout << "Enter 1 number:";
    cin >> a;
    cout << "Enter 2 number:";
    cin >> b;
    cout << "1: +" << endl;
    cout << "2: -" << endl;
    cout << "3: *" << endl;
    cout << "4: /" << endl;
    cout << "Enter a number to select an action:";
    cin >> c;
    cout << "Resault: ";
    switch (c)
    {
        case 1:
            cout << a + b;
            break;
        case 2:
            cout << a - b;
            break;
        case 3:
            cout << a * b;
            break;
        case 4:
            cout << a / b;
            break;
        default:
            cout << "Error: You entered an invalid value";
            break;
    }
}
