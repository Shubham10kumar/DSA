// WAP to print value of number raised to power to another number

#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "Enter two numbers : ";
    cin >> a >> b;
    float product = 1;

    bool flag = true; // true means b=> positive
    if (b < 0)
    {
        flag = false;  // false means b=>negative
        b = -b;         // make b positive
    }

    for (int i = 1; i <= b; i++)
    {
        product *= a;
    }
    if (flag == false)
        product=1/product;
        
    cout<<product;

    // if (b >= 0)
    // {
    //     for (int i = 1; i <= b; i++)
    //     {
    //         product *= a;
    //     }
    //     cout << product;
    // }
    // else
    // {
    //     for (int i = 1; i <= -b; i++)
    //     {
    //         product *= a;
    //     }
    //     float k = product;
    //     cout << 1 / k;
    // }

    return 0;
}