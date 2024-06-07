#include<iostream>
using namespace std;
int main(){
    int x=300;
    int *p=&x;
    cout<<p<<endl;
    cout<<p+1;
    return 0;
}