#include<iostream>
#include<climits>
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
    int max=INT_MIN;
    for(int i=0;i<n;i++){
       if (max<arr[i])
        max=arr[i];
    }
    cout<<max;
}