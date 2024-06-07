//SUM OF DIGITS OF GIVEN NUMBER

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    int sum=0;
    int k;
    while(n>0)
    {
        
        k=n%10;
        sum+=k;
        n/=10;
    }
    cout<<sum;

}   