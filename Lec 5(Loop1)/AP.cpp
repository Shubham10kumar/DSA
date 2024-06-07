#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter no. of terms : ";
    cin>>n;
    // for(int i=1;i<=1+(n-1)*2 ; i+=2){
    //     cout<<i<<" ";
    // }
    int a=1;
    for(int i=1;i<=n;i++)
    {
        cout<<a<<endl;
        a=a+2;
    }
    return 0;
}