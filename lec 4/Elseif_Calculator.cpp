#include<iostream>
using namespace std;
int main(){
    int a,b;
    char op;
    cout<<"Enter Expression : ";
    cin>>a>>op>>b;
    if(op=='+') cout<<a+b;
    if(op=='-') cout<<a-b;
    if(op=='*') cout<<a*b;
    if(op=='/') cout<<a/b;
 return 0;
}