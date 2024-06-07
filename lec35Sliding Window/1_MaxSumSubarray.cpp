#include<iostream>
#include<climits>
using namespace std;
int main(){
    int k=3;
    int arr[]={7,1,2,5,8,4,9,3,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    // int maxSum=INT_MIN;
    // for(int i=0;i<=n-k;i++){ // total operation =n-k+1
    //     int sum=0;
    //     for(int j=i;j<i+k;j++){ // total operation k times
    //         sum+=arr[j];
    //     }
    //     if(sum>maxSum) maxSum=sum;
    // }
    // //T.C =O((n-k)*k)
    // cout<<"Max Sum of Subarray is : "<<maxSum;
    int maxSum=INT_MIN;

    int prevSum=0;
    for(int i=0;i<k;i++){
        prevSum+=arr[i];
    }
    int i=1;
    int j=k;
    while(j<n){
        int currSum=prevSum+arr[j]-arr[i-1];
        if(maxSum<currSum){
            maxSum=currSum;;
        }
        i++;
        j++;
        prevSum=currSum;
    }
    cout<<maxSum;
    return 0;
}