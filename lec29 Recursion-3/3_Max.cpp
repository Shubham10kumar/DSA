#include<iostream>
using namespace std;
int mx(int arr[],int n,int idx){
    if(idx==n) return -1;
    if(arr[idx]>mx(arr,n,idx+1)) return arr[idx];
    else return mx(arr,n,idx+1);
}
void max2(int arr[],int n,int idx,int max){
    if(idx==n){
        cout<<max;
        return;
    }
    if(max<arr[idx]) max=arr[idx];
    max2(arr,n,idx+1,max);
}
int max3(int arr[],int n,int idx){
    if(idx==n) return -1;
    return max(arr[idx],max3(arr,n,idx+1));
}
int main(){
    int arr[]={0,2,3,2,9,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<mx(arr,n,0)<<endl;
    max2(arr,n,0,-1);
    cout<<endl;
    cout<<max3(arr,n,0);
    return 0;
}