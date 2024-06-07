#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number of rows : ";
    cin >> n;
    int nsp = n - 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= nsp; j++)
        {
            cout << " ";
        }
        nsp--;
        for (int k = 1; k <= i - 1; k++)
        {
            cout << k;
        }
        int a=i;
        for(int l=1;l<=i;l++){
            cout<<a;
            a--;
        }
         // for (int l = i; l >=1; l--)
        // {
        //     cout << l;
        // }
        cout << endl;
    }
    return 0;
}