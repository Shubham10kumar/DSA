//Given an integer array nums,in which exactly two elements occurs only once
//and all other ele appears exactly twice.Find 2 ele that appears only once
#include<iostream>
#include<vector>
using namespace std;
void uniqueno2(int *arr,int n){
    int res=0;
    for(int i=0;i<n;i++){
        res=res^arr[i];
    }
    int temp=res;
    int k=0;
    while(true){
        if((temp & 1 )== 1) break;
        temp = temp >> 1;
        k++;
    }
    int retval=0;
    for(int i=0;i<n;i++){
        int num = arr[i];
        if(((num >> k) & 1)==0){
            retval ^=num;
        }
    }
    cout<< retval<<" ";
    res= retval ^ res;
    cout<< res<< " ";
}
int main(){
   int arr[]={3,2,9,3,2,8};
   int n=sizeof(arr)/sizeof(arr[0]);
   uniqueno2(arr,n);
   return 0;
}