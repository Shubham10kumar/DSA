//Given an array, predict if the array contains duplicates or not.
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    bool duplicate=false;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                cout<<"Duplicate element is present.";
                duplicate=true;
                break;  
            }
        }
    }
    if(duplicate==false)
        cout<<"No Duplicate element.";

}