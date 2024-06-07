#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"Enter the rows: ";
    cin>>m;
    int n;
    cout<<"Enter the columns: ";
    cin>>n;
    int arr[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    int brr[n][m];
    for(int j=m-1;j>=0;j--){
        for(int i=0;i<n;i++){
            brr[i][j]=arr[m-j-1][i];
        }
    }
    cout<<"Matrix Rotation :"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<brr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}