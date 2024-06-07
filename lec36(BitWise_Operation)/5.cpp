//Given an integer array.Find length of longest subarray
//which has maximum possible bitwise AND value
#include<iostream>
#include<algorithm>
#include <climits>
using namespace std;
int main(){
    int arr[]={12,25,1,6,1,20,20,8,13,13,13,13,13,13,56};
    int n=sizeof(arr)/sizeof(arr[0]);
    int ans=0;
    int max_el=INT_MIN;
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]>max_el){
            count=1;
            max_el=arr[i];
        }
        else if(arr[i]==max_el){
            count++;
        }
        ans=count;
    }
    cout<<count;
    return 0;
}