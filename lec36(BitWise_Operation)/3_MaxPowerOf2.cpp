#include<iostream>
using namespace std;
int main(){
    int x=64;
    int temp;
    while(x!=0){
        temp=x;
        x=x&(x-1);
    }
    cout<<temp;
    return 0;
}