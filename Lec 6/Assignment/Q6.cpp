//Print the sum of a number and its reverse 

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    int k=n;
    int reverse=0;
    int last=0;
    while(n>0)
    {
        reverse*=10;
        last=n%10;
        reverse= reverse +last;
        n/=10;
    }
    cout<<k<<" + "<<reverse<<" = "<<k+reverse;
    return 0;
}