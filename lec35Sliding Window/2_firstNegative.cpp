#include<iostream>
using namespace std;
int main(){
    int arr[]={2,3,4,4,-7,-1,4,2,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int k=2;
    int ans[n-k];
    // for(int i=0;i<=n-k;i++){
    //     for(int j=i;j<i+k;j++){
    //         if(arr[j]<0){
    //             ans[i]=arr[j];
    //             break;
    //         }
    //     }
    // }
    int p=-1;
    for(int i=0;i<k;i++){
        if(arr[i]<0){
            p=i;
            break;
        } 
    }
    if(p==-1) ans[0]=0;
    else ans[0]=arr[p];
    int i=1;
    int j=k;
    while(j<n){
        if(p>=i){
            ans[i]=arr[p];
        }
        else{
            p=-1;
            for(int m=i;m<i+k;m++){
                if(arr[m]<0){
                    p=m;
                    break;
                }
            }
            if(p==-1) ans[i]=0;
            else ans[i]=arr[p];
        }
        i++;
        j++;
    }
    for(int i=0;i<=n-k;i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}