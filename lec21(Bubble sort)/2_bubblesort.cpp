#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int arr[5]={45,16,223,1000,1200};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    for(int i=0 ; i< n-1 ; i++){ // n-1 passes
        bool flag = true;
        for(int j=0 ; j<n-1-i ; j++){
            if(arr[j]>arr[j+1]){ //swap
                swap(arr[j],arr[j+1]);
                flag = false;
            }
        }
        if(flag == true) 
        {   break; // swap didn't happen
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}