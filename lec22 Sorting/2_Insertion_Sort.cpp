#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int arr[]={3,13,21,34,42};
    int n=5;
    for(int i=1 ; i<n ;i++){
        int j=i;
        while(j>=1 && arr[j]<arr[j-1])
        {
            swap(arr[j],arr[j-1]);
            j--;
        }
        
    }
    for(int ele : arr){
        cout<<ele<<" ";
    }
    return 0;
}