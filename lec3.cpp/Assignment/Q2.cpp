#include<iostream>
using namespace std;
int main(){
    int r;
    cout<<"Enter Radii : ";
    cin>>r;
    if((3.14*r*r)>(2*3.14*r)){
        cout<<"Area is greater than circumference.";
    }
    else{
        cout<<"Circumference is greater than Area.";
    }
        return 0;
}