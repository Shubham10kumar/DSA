#include<iostream>
#include<vector>
using namespace std;
int inversion(vector<int>& arr1,vector<int>& arr2){
    int count=0;
    int i=0,j=0;
    while(i<arr1.size() && j<arr2.size()){
        if(arr1[i]>arr2[j]){
            count+=(arr1.size()-i);
            j++;
        }
        else{
            i++;
        }
    }
    return count;
}
void merge(vector<int>& arr1,vector<int>& arr2,vector<int>& v){
    int i=0,j=0,k=0;
    int n=arr1.size();
    int m=arr2.size();
    while(i<=n-1 && j<=m-1){
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
int mergeSort(vector<int>& v){
    int ans=0;
    int n=v.size();
    if(n==1) {
        return 0;
    }
    int n1=n/2;
    int n2=n-n1;
    vector<int> a(n1);
    vector<int> b(n2);
    for(int i=0;i<n1;i++)
    {
        a[i]=v[i];
    }
    for(int i=0;i<n2;i++)
    {
        b[i]=v[i+n1];
    }
    ans+=mergeSort(a);
    ans+=mergeSort(b);
    //counting inversion
    ans+=inversion(a,b);
    merge(a,b,v);
    return ans;
}
int main(){
    int arr[]={5,1,8,2,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    vector<int> v(arr,arr+n);
    cout<<mergeSort(v);
    return 0;
}