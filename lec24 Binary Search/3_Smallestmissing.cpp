#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[]={0,1,3,4,6,7,8,9,11};
    int n=9;
    // bool flag=false;
    // // Linear Approach
    // for(int i=0;i<n;i++){
    //     if(arr[i] != i){
    //         cout<<i;
    //         flag=true;
    //         break;
    //     }
    // }
    // if(flag==false) cout<<-1;

    // Binary Approach
    int lo=0;
    int hi=n-1;
    int ans;
    while(lo<=hi){
        for(int i=0 ; i<n;i++){
            int mid=lo+(hi-lo)/2;
            if(arr[mid] == mid) 
                lo=mid+1;
            else{
                ans=mid;
                hi=mid-1;
            }   
                
        }
    }
    cout<<ans;
    
    return 0;
}