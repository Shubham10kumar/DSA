#include<iostream>
#include<vector>
using namespace std;
int main(){
    int m;
    cout<<"Enter the no. of rows : ";
    cin>>m;
     int n;
    cout<<"Enter the no. of cols : ";
    cin>>n;
    int arr[m][n];
    cout<<"Enter the elements of the matrix : "<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    cout<<"Final Answer : "<<endl;
    for(int j=0;j<n;j++){
        if (j%2==0){
        for(int i=m-1;i>=0;i--){
            cout<<arr[i][j]<<" ";
        }
        }
        else{
            for(int i=0;i<m;i++){
                cout<<arr[i][j]<<" ";
            }
        }
    }
    
    return 0;
}