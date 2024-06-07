#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "Enter the 1st number : ";
    cin >> a;
    cout << "Enter the 2nd number : ";
    cin >> b;
    cout << "Enter the 3rd number : ";
    cin >> c;
    if (a < b)
    {
        if (a < c)
        {
            cout << "a";
        }
        else
        {
            cout << "c";
        }
    }
    else // {a>b}
    {
        if (b < c) //{a>b && c>b}
        {
            cout << "b";
        }
        else  //{a>b && b>c}
        {
            cout << "c";
        }
    }
    return 0;
}