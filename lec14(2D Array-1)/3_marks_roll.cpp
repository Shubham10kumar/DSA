#include<iostream>
using namespace std;
int main(){
    // int n;
    // cout<<"Enter the total number of student :";
    // cin>>n;
    // int arr[2][n];
    // cout<<"Enter Roll Number : "<<endl;
    //     for(int j=0;j<n;j++){
    //         cin>>arr[0][j];
    //     }
    // cout<<"Enter Marks :"<<endl;
    //     for(int j=0;j<n;j++){
    //         cin>>arr[1][j];
    //     }
    //   for(int i=0;i<2;i++){
    //     for(int j=0;j<n;j++){
    //         cout<<arr[i][j]<<" ";
    //     }
    //     cout<<endl;
    // } 
    int m;
    cout<<"Enter the total number of student :";
    cin>>m;
    int arr[m][2];  
    cout<< "Roll No and Marks"<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<=1;j++){
            cin>>arr[i][j];
        }
    }
    cout<< "Result is :"<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<=1;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}