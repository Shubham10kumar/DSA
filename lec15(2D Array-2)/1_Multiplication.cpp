#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"Enter the rows of 1st matrix : ";
    cin>>m;
    int n;
    cout<<"Enter the cols of 1st matrix : ";
    cin>>n;
    int p;
    cout<<"Enter the rows of 2nd matrix : ";
    cin>>p;
    int q;
    cout<<"Enter the cols of 2nd matrix : ";
    cin>>q;
    if(n==p){
        int a[m][n];
        cout<<"Enter the elements of 1st matrix : "<<endl;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                cin>>a[i][j];
            }
        }
        int b[p][q];
        cout<<"Enter the elements of 2nd matrix : "<<endl;
        for(int i=0;i<p;i++){
            for(int j=0;j<q;j++){
                cin>>b[i][j];
            }
        }
        int res[m][q];
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                 res[i][j]=0;
                 for(int k=0;k<n;k++){
                    res[i][j]+=a[i][k]*b[k][j];
                 }
            }
        }
        cout<<"Resultant matrix : ";
        for(int i=0;i<m;i++){
            for(int j=0;j<q;j++){
                cout<<res[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}