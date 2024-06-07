#include<iostream>
using namespace std;
int main(){
    // int arr[3][3]={1,2,3,4,5,6,7,8,9};
    int m;
    cout<<"Enter the rows : ";
    cin>>m;
    int n;
    cout<<"Enter the columns : ";
    cin>>n;
    int arr[m][n];
    cout<<"Enter the input :";
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    cout<<"2d array is : "<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}