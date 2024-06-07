#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"Enter the no. of rows/cols : ";
    cin>>n;
    int arr[n][n];
    int k=1, i=0;
    while(k<= n*n){
        int j=i;
        // Right
        while(j<n-i){
            arr[i][j++] =k++;
        }
        j=i+1;
        // Top - Bottom
        while(j<n-i){
            arr[j++][n-i-1] =k++;
        }
        j=n-i-2;
        // Right
        while(j>i){
            arr[n-i-1][j--] =k++;
        }
        // bottom -> Top
        while(j>i){
            arr[j--][i]=k++;
        }
    }
    cout<<"Final Answer : "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}