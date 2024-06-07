#include <iostream>
using namespace std;
int main()
{
    int x;
    cout<<"Enter the number"<<endl;
    cin>>x;
    if(x<0){
        x*=-1;

        cout<<"Absolute Value : "<<x<<endl;
    }
    else{
        cout<<"Absolute Value : "<<x<<endl;
    }
    cout<<x;
    return 0;
}