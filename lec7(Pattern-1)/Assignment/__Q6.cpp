#include <iostream>
using namespace std;
int main()
{
    int n, m;
    cout << "Enter the row and column : ";
    cin >> n >> m;

    for (int i = 1; i <= n; i++)
    {
        if (i == 1 || i == n)
        {
            for (int k = 1; k <= m; k++)
                cout << "*";
            cout<<endl;
        }
        

        else
        {
            for (int j = 1; j <= m; j++)
            {
                if (j == 1 || j == m)
                {
                    cout << "*";
                }
                else
                {
                    cout << " ";
                }
            }
            cout << endl;
        }
    }
}