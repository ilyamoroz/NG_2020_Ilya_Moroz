#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int a, b, c, d;
    float x1, x2;
    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;
    cout << "Enter c: ";
    cin >> c;
    d = (b * b) - 4 * a * c;
    cout << d << endl;
    if (d > 0)
    {
    x1 = (-(b) + sqrt(d)) / 2 * a;
    cout << x1 << endl;
    x2 = (-(b) - sqrt(d)) / 2 * a;
    cout << x2 << endl;
    }
    if (d == 0)
    {
    x1 = (-(b)+ sqrt(d)) / 2 * a;
    cout << x1 << endl;
    }
    if (d < 0)
    {
    cout << "net korney!!!!";
    }
}
