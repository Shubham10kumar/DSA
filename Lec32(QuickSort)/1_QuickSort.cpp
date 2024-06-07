#include<iostream>
#include<algorithm>
using namespace std;
int partition(int arr[],int si,int ei){
    // Randomised Pivot Point
    int pivotele=arr[(si+ei)/2];
    int count=0;
    for(int i=si ; i<=ei ; i++){
        if(i==((si+ei)/2)) continue;
        if(arr[i]<=pivotele){
            count++;
        }
    }
    int pivotidx=si+count;
    swap(arr[(si+ei)/2],arr[pivotidx]);
    int i=si;
    int j=ei;
    while(i<=pivotidx && j>pivotidx){
        if(arr[i]<=arr[pivotidx]) i++;
        if(arr[j]>arr[pivotidx]) j--;
        else  if(arr[i]>arr[pivotidx] && arr[j]<=arr[pivotidx]){
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
    }
    return pivotidx;
}
void quicksort(int arr[],int si,int ei){
    // si=>Start idx  pi=>pivot idx  ei=>end idx
    if(si>=ei){
        return ;
    }
    int pi=partition(arr,si,ei);
    quicksort(arr,si,pi-1);
    quicksort(arr,pi+1,ei);
}
int main(){
    int arr[]={5,1,8,-1,4,8,6,3,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    quicksort(arr,0,n-1);
    cout<<"Array After sorting"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}