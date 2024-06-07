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
    int brr[m][n];
    cout<<"Enter the data of 1st 2d array :"<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    cout<<"Enter the data of 2nd 2d array :"<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>brr[i][j];
        }
    }
    int res[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
           res[i][j]=arr[i][j] + brr[i][j];
        }
    }
    cout<<"Resultant Matrix : "<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
           cout<<res[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}