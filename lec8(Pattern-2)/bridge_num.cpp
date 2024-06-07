#include<iostream>
using namespace std;
int main(){
    int n,k,s;
    cout<<"row : ";
    cin>>n;
    int m=n-1;
    int nsp=1;
    for(int i=1;i<=2*n-1;i++){
        cout<<i;
    }
      cout<<endl;
    for(int j=1;j<=m;j++){
        int a=1;
        for(int k=1;k<=m-j+1;k++){
            cout<<a;
            a++;
        }
        for(int l=1;l<=nsp;l++){
            cout<<" ";
        }
        nsp+=2;
        for(int p=1;p<=m-j+1;p++){
            cout<<a+nsp-2;
            a++;
        }
        cout<<endl;

    }
    return 0;
}
