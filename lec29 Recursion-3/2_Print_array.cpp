#include<iostream>
#include<vector>
using namespace std;
void print(int arr[],int i,int n){
    if(i==n) return ;
    cout<<arr[i]<<" "<<i<<" call"
    <<endl;
    return print(arr,i+1,n);
}
void print2(vector<int>& v,int idx){
    
    if(idx==v.size()) return ;
    cout<<v[idx]<<" ";
    return print2(v,idx+1);
}
int main(){
    int arr[]={2,4,1,3,4,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    print(arr,0,n);
    cout<<endl;
    
    vector<int> v(n);
    for(int i=0;i<n;i++){
        v[i]=arr[i];
    }
    print2(v,0);
    return 0;
}