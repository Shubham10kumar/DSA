// Print the factorial upto n terms

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact *= i;
        cout << "factorial of " << i << "->" << fact << endl;
    }
}