#include<iostream>
#include<vector>
using namespace std;
int main(){
    // SQUARE MATRIX
    int m;
    cout<<"Enter the no. of rows : ";
    cin>>m;
    int arr[m][m];
    cout<<"Enter the elements of the matrix : "<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    cout<<"Question Solved : "<<endl;
    for(int i=0 ;i<m;i++){
        for(int j=0 ; j<m ;j++){
            if((i==j || (i+j)==m-1)){
                cout<<arr[i][j]<<" ";
            }
            else{
                
                cout<<" "<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}
