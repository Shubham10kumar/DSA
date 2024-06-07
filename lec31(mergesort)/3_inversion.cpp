#include<iostream>
#include<vector>
using namespace std;
int count(int arr[],int n){
    int ans=0;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]) ans++;
        }
    }
    return ans;
}
int main(){
    int arr[]={5,1,8,2,3};
    cout<<count(arr,5);
    return 0;
}