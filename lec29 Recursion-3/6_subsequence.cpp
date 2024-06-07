#include<iostream>
#include<vector>
using namespace std;
void print(int arr[],int n,int k,int idx,vector<int> ans){
    if(idx==n){
        if(ans.size()==k){
            for(int i=0;i<ans.size();i++){
                cout<<ans[i]<<" ";
            }
            cout<<endl;
        }
        return;
    }
    if((ans.size()+n-idx)>=k){
        print(arr,n,k,idx+1,ans);
        ans.push_back(arr[idx]);
        print(arr,n,k,idx+1,ans);
    }
    
}
int main(){
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=3;
    vector<int> ans;
    print(arr,n,k,0,ans);
    return 0;
}