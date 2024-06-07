#include<iostream>
#include<string>
using namespace std;
int main(){
    string input;
    getline(cin,input);
    cout<<input.length()<<endl;
    cout<<input<<endl;
    input.push_back('e');
    cout<<input<<endl;
    input.push_back('f');
    cout<<input<<endl;
    input.push_back('g');
     cout<<input<<endl;
    input.push_back('j');
     cout<<input<<endl;
    return 0;
}