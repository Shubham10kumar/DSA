#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main(){
    string s;
    cout<<"Enter the string : "<<endl;
    cin>>s;
    int count=0;
    int n=s.size();
    for(int i=0 ; i<n ; i++)
    if(s[i] != 'a' && s[i] !='e' && s[i] !='i' && s[i] !='o' && s[i] !='u' )
        count++;
    cout<<count;
    return 0;
}