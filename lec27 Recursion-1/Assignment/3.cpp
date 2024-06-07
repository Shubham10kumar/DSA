#include<iostream>
using namespace std;
void check(int n){
    if(n==1) {
        cout<<"Power of 2";
        return;
    }
    if(n%2!=0) {
        cout<<"Not power of 2";
        return;
    }
    else{
        return check(n/=2);
    }
}
int main(){
    check(4);
    return 0;
}