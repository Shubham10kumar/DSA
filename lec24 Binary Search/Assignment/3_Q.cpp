#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[4][4]={{0,0,0,0},{0,0,0,0},{1,1,1,1},{0,0,0,0}};
    int n=4;
    int max=0;
    for(int i=0;i<4;i++){
        int hi=n-1;
        int lo=0;
        int mid=0;
        int lower=-1;
        while(lo<=hi){
            mid=lo+(hi-lo)/2;
            if(arr[i][mid]==1){
                int idx=mid;
                while(idx>=0 && arr[i][idx] == 1){
                    lower=idx--;
                }
                break;
            }
            else{
                lo=mid+1;
            }
        }
        if(max<(n-lower) && lower !=-1) max= n-lower;
    }
    cout<<max;
    return 0;
}