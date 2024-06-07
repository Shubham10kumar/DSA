#include<iostream>
#include<climits>
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
    int min1=INT_MAX;
    int min2=INT_MAX;
    for(int i=0;i<n;i++){
        if(min1>arr[i]){
            min2=min1;
            min1=arr[i];
        }
    }
    if(min1==arr[0])
    {   min2=INT_MAX;
        for(int i=1;i<n;i++){
        if(min2>arr[i]){
            min2=arr[i];
        }
    }
    }
    cout<<"1st minimum element : "<<min1<<endl;
    cout<<"2nd minimum element : "<<min2<<endl;
}