#include<iostream>
using namespace std;
void print(int n){
    if(n==-2) return;
    print(n-1);
    cout<<n+2<<endl;
}
int main(){
    print(4);
    return 0;
}