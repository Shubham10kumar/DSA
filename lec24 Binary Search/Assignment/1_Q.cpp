//Find the last occurance of'x' in the sorted array
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[]={1,2,3,5,5,5,5};
    int n=7;
    int x=5;
    int lo=0;
    int hi=n-1;
    bool flag=false;
    while(lo<=hi){
        int mid=lo+(hi-lo)/2;
        if(arr[mid]>x)  hi=mid-1;
        if(arr[mid]<x)  lo=mid+1;
        if(arr[mid]==x){
            if(arr[mid+1]!=x){  
                cout<< mid;
                flag=true;
                break;
            }
            else{
                lo=mid+1;
            }
        }
    }
    if(flag==false) cout<<-1;
    return 0;
}