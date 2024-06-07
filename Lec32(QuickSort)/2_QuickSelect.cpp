//Finding kth smallest in Given array
#include<iostream>
using namespace std;
int partition(int arr[],int si,int ei){
    int pivotele=arr[(si+ei)/2];
    int count=0;
    for(int i=0;i<ei;i++){
        if(i==(si+ei)/2) continue;
        if(arr[i]<=pivotele){
            count++;
        }
    }
    int pivotidx=(si+ei)/2+count;
    swap(arr[(si+ei)/2],arr[pivotidx]);
    int i=si;
    int j=ei;
    while(i<j){
        if(arr[i]<=arr[pivotidx]) i++;
        if(arr[j]>arr[pivotidx]) j--;
        else if(arr[i]>arr[pivotidx] && arr[j]<=arr[pivotidx]){
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
    }
    return pivotidx;
}
int quicksort(int arr[],int si,int ei,int pos){
    int pi=partition(arr,si,ei);
    if(pi+1==pos) return arr[pi];
    else if(pi+1>pos){
        return quicksort(arr,si,pi-1,pos);
    }
    else if(pi+1<pos){
        return quicksort(arr,pi+1,ei,pos);
    }
}
int main(){
    int arr[]={5,1,8,2,7,6,3,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=6;
    cout<<quicksort(arr,0,n-1,k);
    return 0;
}