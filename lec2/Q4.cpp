#include<iostream>
using namespace std;
int main(){
    int x=5;
    int y=10;
    x += y -= x;
    cout<<x<<" "<<y;

    return 0;
}