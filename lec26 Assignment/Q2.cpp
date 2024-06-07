#include<iostream>
using namespace std;
int main(){
    int arr[]={1,3,4,5,12,15,19,24,28,36,45};
    int n=11;
    int x=28;//arr infinite size ki honi chahiye
    int lo=0;
    int hi=1;
    while(arr[hi]<x){
        lo=hi;
        hi*=2;
    }
    bool flag=false;
    while(lo<=hi){
        int mid=(lo+hi)/2;
        if(arr[mid]==x) {
            flag=true;
            cout<<"Found at "<<mid;
            break;
        }
        else if(arr[mid]>x) hi=mid-1;
        else lo=mid+1;
    }
    if(flag==false) cout<<"Element not found";
    return 0;
}