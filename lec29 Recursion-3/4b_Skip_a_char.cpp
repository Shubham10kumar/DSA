#include<iostream>
#include<string>
//Printing after skipping char a
#include<algorithm>
using namespace std;
void print(string name,int idx,string s){
    if(idx==name.size()){
        cout<<s;
        return;
    }
    if(name[idx]=='a') return print(name,idx+1,s);
    else {
        s.push_back(name[idx]);
        return print(name,idx+1,s);
    }
}
int main(){
    string str="Shubham KUmar";
    print(str,0,"");
    return 0;
}