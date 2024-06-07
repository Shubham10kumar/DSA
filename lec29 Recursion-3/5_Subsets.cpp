#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
void print(string s,string ans,int idx){
    if(idx==s.size()){
        cout<<ans<<" ";
        return;
    } 
    char ch=s[idx];
    print(s,ans+ch,idx+1);
    print(s,ans,idx+1);
    
}
int main(){
    string str="abc";
    print(str,"",0);
    return 0;
}