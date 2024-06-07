#include<iostream>
using namespace std;
void sum(int ans,int n){
    if(n==0){
        cout<<ans<<endl;
        return;
    } 
    sum(ans+n,n-1);
}
int sum2(int n){
    if(n==0) return 0;
    return n+sum2(n-1);
}
int main(){
    sum(0,14);
    cout<<sum2(5);
    return 0;
}