#include<iostream>
using namespace std;
int pow(int a,int b){
    int ans=1;
    if(b==0) return 1;
    if(b==1 ) return a;
    ans=pow(a,b/2);
    if (b%2!=0) {
        return a*ans*ans;
    }
    else {
        return ans*ans;
    }
}
int main(){
    int a;
    cout<<"Enter the base : ";
    cin>>a;
    int b;
    cout<<"Enter the power : ";
    cin>>b;
    //1 1 2 3 5 8 13 21 34 55 89
    cout<<pow(a,b);
    return 0;
}