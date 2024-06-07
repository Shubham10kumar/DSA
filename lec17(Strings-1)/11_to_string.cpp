#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    long long n;
    cout<<"Enter the number  : ";
    cin>>n;
    string str=to_string(n);
    cout<<str.length();
    return 0;
}