//Print the fibonacci series upto n terms
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;
    int a=0;
    int b=1;
    int sum=0;
     cout<<1<<" ";
    for(int i=1;i<=n-1;i++)
    {
        sum=a+b;
        a=b;
        b=sum;
        cout<<b<<" ";
    }
}