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
    //Spiral
    int minr=0,minc=0;
    int maxr=m-1,maxc=n-1;
    while(minr <= maxr && minc <= maxc){
        // Right
        for(int j=minc;j<=maxc;j++){
            cout<<a[minr][j]<<" ";
        }
        minr++;
        if(minr>maxr || minc>maxc) break;
        //Down
        for(int i=minr;i<=maxr;i++){
            cout<<a[i][maxc]<<" ";
        }
        maxc--;
        if(minr>maxr || minc>maxc) break;
        //Left
        for(int j=maxc;j>=minc;j--){
            cout<<a[maxr][j]<<" ";
        }
        maxr--;
        if(minr>maxr || minc>maxc) break;
        //Up
        for(int i=maxr;i>=minr;i--){
            cout<<a[i][minc]<<" ";
        }
        minc++;
        if(minr>maxr || minc>maxc) break;

    }
    return 0;
}