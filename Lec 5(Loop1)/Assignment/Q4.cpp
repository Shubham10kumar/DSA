// Display this AP - 4,7,10,13,16.. upto ‘n’ terms.

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number of terms : ";
    cin >> n;
    int a = 4;
    /******for Loop *****/
    
    // for (int i = 1; i <= n; i++)
    // {
    //     cout << a << endl;
    //     a = a + 3;
    // }

    /******While Loop *****/
    int i=1;
    while(i<=n)
    {
       cout << a << endl;
         a = a + 3;
         i++;
    }
    return 0;
}