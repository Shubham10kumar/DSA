// Display this GP - 3,12,48,.. upto ‘n’ terms.

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number of terms : ";
    cin >> n;
    int a=3;
    /******for Loop *****/

    for(int i=1;i<=n;i++){
        cout<<a<<endl;
        a*=4;
    }
    /******While Loop *****/ 

    // int i=1;
    // while(i<=n)
    // {   cout<<a<<endl;
    //     a*=4;
    //     i++;
    // }
    return 0;
}