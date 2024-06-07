#include<iostream>
#include<string>
//Printing after skipping char a
#include<algorithm>
using namespace std;
void print(string name,string s){
    if(name.size()==0) {
        cout<<s;
        return;
    }
    if(name[0]!='a'&&name[0]!='A'){
        s.push_back(name[0]);
        return print(name.substr(1),s);
    }
    else{
        return print(name.substr(1),s);
    }
}
int main(){
    string str="Raghav Garg";
    print(str,"");
    return 0;
}