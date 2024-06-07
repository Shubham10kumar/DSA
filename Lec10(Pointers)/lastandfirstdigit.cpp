#include<iostream>
using namespace std;
int lastdigit(int n){
    int last=n%10;
    return last;
}
int firstdigit(int n){
    int first;
    while(n!=0){
        first=n%10;
        n=n/10;
        
    }
    return first;
}
int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    cout<<lastdigit(n)<<endl;
    cout<<firstdigit(n);
}