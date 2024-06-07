#include<iostream>
using namespace std;
int main(){
    int arr[]={23,14,12,11,10,5,4,2,1};
    int n=9;
    int x=1;
    int lo=0;
    int hi=8;
    bool flag=false;
    while(lo<=hi){
        int mid=(lo+hi)/2;
        if(arr[mid]==x){
            cout<<"found at "<<mid;
            flag=true;
            break;
        } 
        else if(arr[mid]>x) lo=mid+1;
        else hi=mid-1;
    }
    if(flag==false) cout<<"Element not found";

}