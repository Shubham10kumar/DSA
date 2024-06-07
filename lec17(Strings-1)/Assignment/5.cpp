// Input a string of length less than 10 and convert it into 
// integer without builtin function
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<sstream>
using namespace std;
int main(){
    string s;
    cout<<"Enter the string : "<<endl;
    getline(cin , s);
    int n= s.size();
    int ans=0;
    int k=1;
    for(int i=n-1; i>=0 ; i--){
        int ascii=(int)s[i]-48;
        ans+=ascii*k;
        k*=10;
    }
   cout<<ans;
    return 0;
}