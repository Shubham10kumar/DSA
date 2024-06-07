#include<iostream>
#include<string>
using namespace std;
bool check(string s,int i,int j){
    if(i==j) return true;
    if(s[i]!=s[j]) return false;
    else return check(s,i+1,j-1);
}
int main(){
    string s="racear";
    int h=s.size()-1;
    if(check(s,0,h)==true){
        cout<<"Yes";
    }
    else cout<<"No";
    return 0;
}