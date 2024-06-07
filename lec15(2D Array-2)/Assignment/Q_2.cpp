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
    // Transpose 
    for(int i=0;i<m-1;i++){
        for(int j=i+1;j<n;j++){
            if(i!=j){
                int temp=arr[i][j];
                arr[i][j]=arr[j][i];
                arr[j][i]=temp;
            }
        }
    }
    cout<<"Transpose : " <<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    for(int i=0;i<(m/2);i++){
        for(int j=0;j<n;j++){
                int temp=arr[i][j];
                arr[i][j]=arr[m-1-i][j];
                arr[m-1-i][j]=temp;
        }
    }
    cout<<"Final Answer : " <<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}