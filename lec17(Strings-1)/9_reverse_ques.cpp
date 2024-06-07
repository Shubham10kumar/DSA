#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string str;
    cout<<"Enter the string : ";
    getline(cin,str);
    cout<<"Input string is : "<<str<<endl;
    int n=str.length();
    reverse(str.begin(),str.begin()+(n/2));
    cout<<str;
    return 0;
}