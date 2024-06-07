#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<sstream>
using namespace std;
int main(){
    string str="a";
    cout<<stoi(str)+1<<endl;

    string str2="123247879797879835";
    long long x2=stoll(str2);
    cout<<x2+1;
    return 0;
}