#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number of rows : ";
    cin >> n;
    int a = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        for (int k = 1; k <= a; k++)
        {
            cout << "*";
        }
        a += 2;
        cout << endl;
    }

for (int t = 1; t <= n - 1; t++)
{
    for (int m = 1; m <= t; m++)
    {
        cout << " ";
    }
    for (int s = 2 * (n - t) - 1; s >= 1;s--)
    {
        cout << "*";
    }
    cout << endl;
}
 

return 0;
}