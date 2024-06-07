#include<iostream>
using namespace std;
int main(){
    int x,y;
    cout<<"Enter the point : ";
    cin>>x>>y;
    if(x==0 && y==0)
    {
        cout<<"Lies on Origin.";
    }
    else if(x==0)
    {
        cout<<"Lies on Y-Axis.";
    }
    else if( y==0)
    {
        cout<<"Lies on X-Axis.";
    }
    return 0;
}