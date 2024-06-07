#include<iostream>
#include<vector>
using namespace std;
int main(){
    int num=15;
    /* LINEAR APPROACH*/

    // int k=1;
    // while(num>=k){
    //     num-=k;
    //     k++;
    // }
    // cout<<k-1;
    int lo=0;
    int hi=num;
    bool flag=false;
    while(lo<=hi){
        int mid=lo+(hi-lo)/2;
        if((mid*(mid+1)/2)<num) lo=mid+1;
        else if((mid*(mid+1)/2) > num) hi=mid-1;
        if((mid*(mid+1)/2)==num) {
            cout<<mid;
            flag=true;
            break;
        }
    }
    if(flag==false) cout<<lo-1;
    return 0;
}