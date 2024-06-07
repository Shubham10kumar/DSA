#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the row : ";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=n-i;j>=0;j--)
        {
            cout<<" ";
        }
        for(int k=64+1;k<=64+i;k++){
            cout<<(char)k;
        }
        cout<<endl;
    }
    
    }
