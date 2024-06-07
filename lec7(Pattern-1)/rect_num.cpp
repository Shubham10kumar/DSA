// // 1 2 3
//    1 2 3
//    1 2 3

#include<iostream>
using namespace std;
int main(){
    int row,column;
    cout<<"Enter the no of rows and columns : ";
    cin>>row>>column;
    for(int i=1;i<=row;i++){
        for(int j=1;j<=column ;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}