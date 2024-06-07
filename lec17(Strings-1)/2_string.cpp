#include<iostream>
#include<string>
using namespace std;
int main(){
    string str="Shubham Kumar";
    cout<<str<<endl;
    
    
    // cout<<"Taking 1st input : "<<endl;
    // string name;
    // cin>>name;
    // cout<<name<<endl;
    cout<<"Taking 2nd input : "<<endl;
    string name2;
    getline(cin,name2);
    cout<<name2;
    return 0;
}