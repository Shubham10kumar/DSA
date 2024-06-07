// A
// AB
// ABC
// ABCD
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the row : ";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1+64;j<=64+i;j++){
            cout<<(char)j;
        }
        cout<<endl;
    }
    return 0;
}