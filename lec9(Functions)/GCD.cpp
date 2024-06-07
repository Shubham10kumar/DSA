#include <iostream>
using namespace std;
int gcd(int x, int y)
{
    int g;
    if (x < y)
    {
        for (int i = 1; i <= x; i++)
        {
            if (x % i == 0 && y % i == 0)
            {
                g = i;
            }
        }
        return g;
    }
    else{
         for (int i = 1; i <= y; i++)
        {
            if (x % i == 0 && y % i == 0)
            {
                g = i;
            }
        }
        return g;
    }
    }
;
int main()
{
    int x, y;
    cout << "Enter x and y : ";
    cin >> x >> y;
    int z = gcd(x, y);
    cout << z;
}