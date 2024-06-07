#include<iostream>
#include<vector>
using namespace std;
void merge(vector<int>& arr1,vector<int>& arr2,vector<int>& v){
    int i=0;
    int j=0;
    int k=0;
    int n=arr1.size();
    int m=arr2.size();
    while(i<=n-1 && j<=m-1)
    {
        if(arr1[i]<=arr2[j]){
            v[k++]=arr1[i++];
        }
        else{  //arr1[i]>arr2[j]
            v[k++]=arr2[j++];
        }
    }
     while (i < n) {
        v[k++] = arr1[i++];
    }
    while (j < m) {
        v[k++] = arr2[j++];
    }
}
void mergeSort(vector<int>& v){
    int n=v.size();
    if(n==1) return;
    int n1=n/2;
    int n2=n-n1;
    vector<int> a(n1);
    vector<int> b(n2);
    for(int i=0;i<n1;i++){
        a[i]=v[i];
    }
    for(int i=0;i<n2;i++){
        b[i]=v[i+n1];
    }
    mergeSort(a);
    mergeSort(b);
    merge(a,b,v);
    a.clear();
    b.clear();
}
int main(){
    int arr[]={2,1,4,10,5,9,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    vector<int> v(arr,arr+n);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    mergeSort(v);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    return 0;
}