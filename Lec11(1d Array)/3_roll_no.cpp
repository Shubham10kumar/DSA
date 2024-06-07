#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of students : ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"Marks of Roll No "<<i<<" :";
        cin>>arr[i];
    }
    cout<<"Student scored less than 35 : ";
    for(int j=0;j<n;j++){
    if(arr[j]<35)  cout<<j<<" ";
    }
    
}