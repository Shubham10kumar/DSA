#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    cout<<"s : "<<s<<endl;
    sort(s.begin(),s.end());
    string t;
    getline(cin,t);
    cout<<"t : "<<t<<endl;
    sort(t.begin(),t.end());
    if(s==t) cout<<"Yes";
    else cout<<"No";
    return 0;
}