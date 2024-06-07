#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main(){
    string s;
    cout<<"Enter the string : "<<endl;
    getline(cin,s);
    cout<<(int)s[0];
    int n=s.size();
    int check =1;
    for(int i=0;i<=(n/2-1) ; i++){
        if(s[i]!= s[n-1-i]){
            cout<<"Not Palindrome";
            check = 0;
            break;

        }
    }
    if(check == 1) cout<<"Palindrome";
    return 0;
}