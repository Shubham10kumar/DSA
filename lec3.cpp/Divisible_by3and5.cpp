#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    if(n%3==0){
        if(n%5==0){
            cout<<"Divisible by 3 and 5.";
        }
        else{
            cout<<"Divisible by 3 only";
        }
    }
    else{
            cout<<"Not divisible by 3 and also not by 5";
        }
    return 0;

}