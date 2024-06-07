#include<iostream>
using namespace std;
int print(int arr[],int start,int n,int target){
    if(start==n) return -1;
    if(arr[start]==target) return start;
    print(arr,start+1,n,target);
}
int main(){
    int arr[]={1,2,3,4,5,6};
    cout<<print(arr,0,6,1);
    return 0;
}