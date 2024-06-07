#include<iostream>
#include<string>
#include<vector>
using namespace std;
void print(string original,string ans,vector<string>& final){
    if(original.size()==0){
        // cout<<ans<<endl;
        final.push_back(ans);
        return ;
    }
    for(int i=0;i<original.size();i++){
        char ch=original[i];
        string left=original.substr(0,i);
        string right=original.substr(i+1);
        print(left+right,ans+ch,final);
    }
}
int main(){
    string str="123";
    // string ans="";
    vector<string> final;
    print(str,"",final);
    for(string ele:final){
        cout<<ele<<endl;
    }
    cout<<final[3];
    return 0;
}