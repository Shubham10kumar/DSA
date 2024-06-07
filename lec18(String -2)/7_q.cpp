#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<sstream>
using namespace std;
int main(){
    vector <string> str;
    int n;
    cout<<"Total number of strings : "<<endl;
    cin>>n;
    cout<<"Input : "<<endl;
    for(int i=0 ; i<n ; i++){
        string s;
        cin>>s;
        str.push_back(s);
    }
    int max=stoi(str[0]);
    int idx=0;
    for(int i=1;i<n;i++){
        if(max<stoi(str[i])){
            max = stoi(str[i]);
            idx=i;
        }
    }
    cout<<idx;
    return 0;
}