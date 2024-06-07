#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
string dec_to_bin(int num){
    string result="";
    while(num>0){
        if(num%2==0){
            result="0"+result;
        }
        else{
            result="1"+result;
        }
        num = num>>1;
    }
    return result;
}
int main(){
    int num=12;
    string str=dec_to_bin(12);
    cout<<str;
    return 0;
}