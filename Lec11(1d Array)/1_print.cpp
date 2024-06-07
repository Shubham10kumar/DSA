#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
    cout<<"Enter the "<<i+1<<" element : "<<endl;
    cin>>arr[i];
    }
    for(int j=0;j<n;j++){
    cout<<j+1 <<" element is : "<<arr[j]<<endl;
    }
}