#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string str;
    getline(cin,str);
    cout<<str<<endl;
    int n=str.length();
    
    cout<<str.substr(n/2 , n/2);
    return 0;
}