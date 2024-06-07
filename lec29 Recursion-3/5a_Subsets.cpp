// Printing Subset 
#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
void print(string s,string ans,int idx,vector<string>& store){
    if(idx==s.size()){
        store.push_back(ans);
        return;
    } 
    char ch=s[idx];
    print(s,ans+ch,idx+1,store);
    print(s,ans,idx+1,store);
    
}
int main(){
    string str="abc";
    vector<string> store;
    print(str,"",0,store);
    for(string ele:store){
        cout<<ele<<endl;
    }
    return 0;
}