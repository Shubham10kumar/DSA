#include<iostream>
using namespace std;
int main(){
    int n,k;
    cout<<"Enter the number of terms : ";
    cin>>n;
    int a=1;
    int b=1;
    int sum=0;
    for(int i=3;i<=n;i++)
    {
        sum=a+b;

        a=b;
        b=sum;
    }
    if(n==1||n==2) cout<<1;
    else   cout<<sum;
    return 0;
}