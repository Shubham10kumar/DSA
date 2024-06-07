#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the row : ";
    cin>>n;
    for(int i=1;i<=n+1;i++){
        if(i%2!=0)
        {for(int j=1;j<=i;j++){
            cout<<j;
        }}
        else{
            for(int k=1+64;k<=64+i;k++){
                    cout<<(char)k;
            }
        }
        cout<<endl;
    }
    return 0;
}