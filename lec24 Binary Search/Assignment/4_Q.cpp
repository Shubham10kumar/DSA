#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5,6,7,8,8};
    int n=9;
    int lo=0;
    int hi=n-1;
    bool flag=false;
    while(lo<=hi){
        int mid=lo+(hi-lo)/2;
        if(arr[mid]==mid){
            if(arr[mid-1]==mid){
                cout<<mid;
                flag=true;
                break;
            }  
            else
                hi=mid-1;
        }
        else{
            lo=mid+1;
        }
        if(flag==true) break;
    }
    return 0;
}