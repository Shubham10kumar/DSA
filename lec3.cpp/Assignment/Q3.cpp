#include<iostream>
using namespace std;
int main(){
    int y;
    cout<<"Enter Year : ";
    cin>>y;
    if(y%4==0){
        cout<<y<<" is a Leap Year.";
    }
    else{
        cout<<y<<" is not a Leap Year.";
    }
        return 0;
}