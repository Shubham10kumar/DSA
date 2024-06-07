#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter any Charater : ";
    cin>>ch;
    int x=(int)ch;
    if(((x>=65) && (x<=90)) || ((x>=97)&&( x<=122))){
        cout<<"Given character is Alphabet ";
    }
    else{
        cout<<"Not";
    }
    return 0;
}