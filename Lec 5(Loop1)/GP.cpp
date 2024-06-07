#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"number of terms of GP : ";
    cin>>n;
    int b=1;
    for(int i=1;i<=n;i++){
        cout<<b<<endl;
        b*=2;
    }
    return 0;
}