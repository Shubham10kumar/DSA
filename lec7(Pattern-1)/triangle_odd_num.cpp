// 1
// 13
// 135
// 1357
// 13579
#include<iostream>
using namespace std;
int main(){
    int r;
    cout<<"Enter the no of rows : ";
    cin>>r;
    // for(int i=1;i<=r;i++){
    //     for(int j=1;j<=i;j++)
    //     {  
    //         cout<<1+(j-1)*2;
    //     }
    //     cout<<endl;
    // }

    for(int i=1;i<=r;i++){
        int a=1;
        for(int j=1;j<=i;j++)
        {  
            cout<<a;
            a+=2;
        }
        cout<<endl;
    }
    return 0;
}