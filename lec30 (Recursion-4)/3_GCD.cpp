#include<iostream>
using namespace std;

int gcd(int a,int b){ // b > a
    if(a==0) return b;
    else return gcd(b%a,a);
}
int main(){
    cout<<gcd(27,18);
    return 0;
}