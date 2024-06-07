#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<sstream>
using namespace std;
int main(){
    string str="Shubham is a a a coder. He is is is 19 19 19 19 years of age a";
    stringstream ss(str);
    string temp;
    vector<string> s;
    while(ss>>temp){
        s.push_back(temp);
    }
    sort(s.begin(),s.end());
     for(int i=0;i<s.size();i++){
        cout<<s[i]<<" ";
    }
    cout<<endl;
    int count=1;
    int max=1;
    int insert=0;
    vector<string> ans;
    for(int i=0;i<s.size();i++){
        if(s[i]==s[i+1]){
            count++;
        }
        else{
            if(max < count){
                max=count;
                count=1;
                for(int j=insert;j>0;j--)
                        ans.pop_back();
                ans.push_back(s[i]);
            }
            else if(max==count){
                ans.push_back(s[i]);
                insert++;
                count=1;
            }
            else{
                count=1;
            }
        }
    }
    cout<<max<<" ";
    // for(int i=0;i<s.size();i++){
    //     cout<<s[i]<<" ";
    // }
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}