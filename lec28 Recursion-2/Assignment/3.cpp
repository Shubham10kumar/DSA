#include<iostream>
using namespace std;
void print(int arr[],int n){
    if (n==0) return;
    int temp[n-1];
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
        if(i!=0){
            temp[i-1]=arr[i]+arr[i-1];
        }
    }
    cout<<endl;
    return print(temp,n-1);
}

int main(){
    int arr[]={5,4,3,2,1};
    print(arr,5);
    return 0;
}