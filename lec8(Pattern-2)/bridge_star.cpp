#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"row : ";
    cin>>n;
    for(int i=1;i<=2*n-1;i++){
        cout<<"*";
    }
    cout<<endl;
    for(int j=1;j<=n-1;j++){
        for(int k=1;k<=n-j;k++){
            cout<<"*";
        }
        for(int s=1;s<=2*(j)-1;s++){
            cout<<" ";
        }
        for(int m=1;m<=n-j;m++){
            cout<<"*";
        }
        cout<<endl;

    }
}