#include<iostream>
#include<vector>
using namespace std;
void removeele(int arr[],int n,vector<int> ans,int idx){
    if(idx==n){
        for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<" ";
        }
        return ;
    }
    if(arr[idx]==2) return removeele(arr,n,ans,idx+1);
    else{
        ans.push_back(arr[idx]);
        removeele(arr,n,ans,idx+1);
    }
}
int main(){
    int arr[]={1,1,1,1,2,3,4,1,1,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    vector<int> ans;
    removeele(arr,n,ans,0);
    return 0;
}