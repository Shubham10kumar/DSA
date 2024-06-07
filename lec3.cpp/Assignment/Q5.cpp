#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "Enter the Length of 1st Side : ";
    cin >> a;
    cout << "Enter the Length of 2nd Side : ";
    cin >> b;
    cout << "Enter the Length of 3rd Side : ";
    cin >> c;
    if ((a + b) > c && (c + b) > a && (a + c) > b)
    {
        if ((a == b) && (a== c))
        {
            cout << "Equilateral Triangle.";
        }
        else if ((a == b) || (b == c) || (c == a))
        {
            cout << "Isosceles Triangle.";
        }
        else
        {
            cout << "Scalan Triangle.";
        }
    }
    else
    {
        cout << "Not a triangle.";
    }

    return 0;
}