#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n=36;
    int lo=0;
    int hi=n;
    bool flag=false;
    while(lo<=hi){
        int mid=lo+(hi-lo)/2;
        if(mid*mid>n) hi=mid-1;
        else if(mid*mid<n) lo=mid+1;
        else if(mid*mid==n){
            cout<<"Yes";
            flag=true;
            break;
        }
    }
    if(flag==false) cout<<"No";
    return 0;
}