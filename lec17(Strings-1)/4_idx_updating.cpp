#include<iostream>
#include<string>
using namespace std;
int main(){
    string input;
    getline(cin,input);
    for(int i=0 ; input[i]!='\0' ; i++){
        if(i%2==0){
            input[i]='a';
        }
    }
    cout<<input;
    return 0;
}