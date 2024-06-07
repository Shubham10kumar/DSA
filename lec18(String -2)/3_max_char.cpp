#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    string s = "raghav";
    vector<int> arr(26,0);
    for(int i=0; i<s.length();i++){
        char ch=s[i];
        int ascii =(int) ch;
        arr[ascii - 97]++;
    }
    int mx = 0;
    for(int i=0 ; i<26 ; i++){
        if(arr[i]>mx) mx=arr[i];
    }
    for(int i=0; i<26; i++){
        if(arr[i]==mx){
            int ascii = i+97;
            char ch =(char) ascii;
            cout<<ch<<" "<<mx<<endl;
        }
    }
    // method -2
    // string s;
    // getline(cin,s);
    // cout<<"s : "<<s<<endl;
    // sort(s.begin(),s.end());
    // int count=1;
    // int max=1;
    // string ans = string(1,s[0]);
    // for(int i=0 ; i<s.size() ; i++){
    //     if(s[i]==s[i+1])
    //     {
    //         count++;
    //     }
    //     else
    //     {
    //         if(count>max)
    //         {
    //             max=count;
    //             ans=s[i];
    //             count=1;
    //         }
    //         else if(count==max){
    //             ans=ans +" "+ s[i];
    //             count = 1 ; 
    //         }
    //         else
    //         {
    //             count=1;
    //         }
    //     }
    // }
    // cout<<ans;
    return 0;
}