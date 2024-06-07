#include<iostream>
using namespace std;
int main(){
    int n,x;
    cout<<"Enter the size : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter the Element you want to search : ";
    cin>>x;
    bool flag= false;
    for(int j=0;j<n;j++){
        if(arr[j]==x){
            cout<<"Element Found.";
            flag=true;
            break;
        }
    }
    if(flag==false) cout<<"Element not found .";
}