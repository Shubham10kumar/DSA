#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int> a(5);
    for(int i=0;i<5;i++){
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    for(int i=0;i<5;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}