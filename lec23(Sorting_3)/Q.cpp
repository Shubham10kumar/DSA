#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    int arr[]={7,3,4,2,5,6,1};
    int n=7;
    for(int ele:arr){
        cout<<ele<<" ";
    }
    cout<<endl;
    for(int i=0;i<=(n/2)+1 ; i++){
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
    for(int ele:arr){
        cout<<ele<<" ";
    }
    return 0;
}