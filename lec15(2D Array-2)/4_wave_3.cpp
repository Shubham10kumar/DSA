#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"Enter the rows of 1st matrix : ";
    cin>>m;
    int n;
    cout<<"Enter the cols of 1st matrix : ";
    cin>>n;
    int a[m][n];
    cout<<"Enter the elements of the matrix : "<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    cout<<"Elements of the Matrix : "<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"Column wise printing : "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<a[j][i]<<" ";
        }
    }
    cout<<endl;
    cout<<"Column wise WAVE printing : "<<endl;
    for(int j=0;j<n;j++){
        if(j%2==0){
            for(int i=0;i<m;i++){
                cout<<a[i][j]<<" ";
            }
        }
        else{
             for(int i=m-1;i>=0;i--){
                cout<<a[i][j]<<" ";
            }
        }
    }
    return 0;
}