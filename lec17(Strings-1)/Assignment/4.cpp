//Input a string of even length and reverse the second half
#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    string s;
    cout<<"Enter the string : "<<endl;
    getline(cin , s);
    int n=s.size();
    reverse(s.begin()+(n/2),s.end());
    cout<<s;
    return 0;
}