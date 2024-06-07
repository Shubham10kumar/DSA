#include <iostream>
using namespace std;
int main()
{
    int r;
    cout << "Enter the no of rows : ";
    cin >> r;
    int mid = (r / 2) + 1;

    for (int i = 1; i <= r; i++)
    {
        for (int j = 1; j <= r; j++)
        {
            if (mid % 2 == 0)
            {
                if (i == mid || j == mid ||i == mid-1 || j == mid-1)
                {
                    cout << "*";
                }
                else
                {
                    cout << " ";
                }
            }
            else{
                
                if (i == mid || j == mid)
                {
                    cout << "*";
                }
                else
                {
                    cout << " ";
                }
            }
        }
        cout << endl;
    }
    return 0;
}