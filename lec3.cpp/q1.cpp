#include<iostream>
using namespace std;
int main(){
    int sp,cp;
    cout<<"Enter sp and cp : "<<endl;
    cin>>sp>>cp;
    int x=sp-cp;
    if(x>0)
    {
        cout<<"Profit"<<endl;
        cout<<x;
    }
    else{
         cout<<"Loss"<<endl;
        cout<<-x;
    }
    return 0;
}