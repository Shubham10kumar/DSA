#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main(){
    string s;
    cout<<"Enter the string : "<<endl;
    cin>>s;
    int n=s.size();
    for(int i=0;i<n;i++){
        if((i%2)!=0){
            s[i] ='#';
        }
    }
    cout<<s;
    return 0;
}