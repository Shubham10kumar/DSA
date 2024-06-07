#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int arr[]={1,2,4,5,9,15,18,19,22,24};
    int n=10;
    int x=19;
    int low=0;
    int high=n-1;
    int k;
    bool flag=false;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]==x) {
            flag=true;
            cout<<arr[mid-1];
            break;
        }
        else if(arr[mid] < x){
            low=mid+1;
        }
        else if(arr[mid] > x){
            high=mid-1;
        }
        
    }
    if(flag==false)
        cout<<arr[high];
    return 0;
}