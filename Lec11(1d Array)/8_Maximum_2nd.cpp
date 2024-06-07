#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements : "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int max1=arr[0]; //1st largest
    int max2=arr[0]; // 2nd Largest
    for(int i=1;i<n;i++){
        if(max1<arr[i]){
            max2=max1;
            max1=arr[i];
            
        }
    }
    cout<<max2;

}
