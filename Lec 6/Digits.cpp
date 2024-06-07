// Wap To COUNT DIGITS OF input number
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    int count=0;
    while(n>0)
    {        n/=10;
             count++;
    }
    if(n==0)  
        cout<<1<<" digit number.";
    else    
        cout<<count<<" digit number.";
    return 0;
}