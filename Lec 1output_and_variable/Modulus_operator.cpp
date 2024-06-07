#include<iostream>
using namespace std;
int main(){
    int a;          // a -> quotient
    int b;          // b -> divisor
    cout<<"Input the values of a and b :";
    cin>>a>>b;
    cout<<a-b*(a/b)<<endl;  //-> dividend = divisor*quotient + remainder
    /*****MODULUS OPERATOR****/
    cout<<a % b<<endl;
    cout<<12 % 7<<endl;
    cout<<7 % 12<<endl;
    return 0;
}