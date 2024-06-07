#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"Enter the number of rows : ";
    cin>>m;
    int n;
    cout<<"Enter the number of columns : ";
    cin>>n;
    int arr[m][n];
    // int t[n][m];
    cout<<"Enter the data of  2d array :"<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
            // t[j][i]=arr[i][j];
        }
    }
    for(int i=0 ;i<m;i++){
        for(int j=0 ; j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"Transpose of matrix (1st): "<<endl;
    for(int i=0 ;i<n;i++){
        for(int j=0 ; j<m;j++){
            cout<<arr[j][i]<<" ";
        }
        cout<<endl;
    }
    // cout<<"Transpose of matrix (2nd): "<<endl;
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<m;j++){
    //         cout<<t[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    
    return 0;
}