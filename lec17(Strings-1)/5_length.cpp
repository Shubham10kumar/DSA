#include<iostream>
#include<string>
using namespace std;
int main(){
    string input;
    getline(cin,input);
    cout<<input.length()<<endl;
    cout<<input.size()<<endl;
    return 0;
}