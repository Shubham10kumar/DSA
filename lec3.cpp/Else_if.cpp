#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the Marks : ";
    cin>>n;
    if(n>=91 && n<=100){
        cout<<"Excellent";
    }
    else if(n>=81 ){
        cout<<"Very good";
    }
    else if(n>=61 ){
        cout<<"Average";
    }
    else if(n>=35 ){
        cout<<"Very Bad";
    }
    else{
        cout<<"Fail";
    }
    return 0;
}