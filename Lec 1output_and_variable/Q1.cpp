#include<iostream>
using namespace std;
int main(){
    float x1,x2,x3,x4,x5;
    cout<<"Enter the marks"<<endl;
    cout<<"Maths : ";
    cin>>x1;
     cout<<"Science : ";
    cin>>x2;
     cout<<"English : ";
    cin>>x3;
     cout<<"S.St : ";
    cin>>x4;
     cout<<"Hindi : ";
    cin>>x5;
    cout<<"Percentage : "<<endl;
    cout<<(x1+x2+x3+x4+x5)/5;
    return 0;
}