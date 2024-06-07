#include<iostream>
#include<vector>
using namespace std;
void print(int arr[],vector<int> ans,int idx,int n){
    if(idx==n){
        for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
        return;
    }
    print(arr,ans,idx+1,n);
    if(ans.size()==0 || ans[ans.size()-1]==arr[idx-1]){
        ans.push_back(arr[idx]);
        print(arr,ans,idx+1,n);
    }
}
int main(){
    int arr[]={1,2,3,4,5};
    int n=5;
    vector<int> ans;
    print(arr,ans,0,5 );
    // for(int i=0;i<n;i++){
    //     for(int k=i;k<n;k++){
    //         for(int j=i;j<=k;j++){
    //             cout<<arr[j]<<" ";
    //         }
    //         cout<<endl;
    //     }
        
    // }
    return 0;
}