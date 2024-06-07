// Given a soreted array,efficiently count the total no.of 1 in it
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[]={0,0,0,0,1,1,1,1,1,3,3,3};
    int n=11;
    int lo=0;
    int hi=n-1;
    int first,last;
    while(lo<=hi){
        int mid=lo+(hi-lo)/2;
        if(arr[mid]>1) hi=mid-1;
        if(arr[mid]<1) lo=mid+1;
        if(arr[mid]==1)
        {
            if(arr[mid-1]!=1) {
                first=mid;
                break;
                }
            else  hi=mid-1;
        }
    }
     lo=0;
     hi=n-1;
    while(lo<=hi){
        int mid=lo+(hi-lo)/2;
        if(arr[mid]>1) hi=mid-1;
        if(arr[mid]<1) lo=mid+1;
        if(arr[mid]==1)
        {
            if(arr[mid+1]!=1) {
                last=mid;
                break;
                }
            else  lo=mid+1;
        }
    }
    cout<<(last-first+1);
    return 0;
}