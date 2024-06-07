//Count number of elements greater than x
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    int n=8;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    int x=3;
    int count=0;
    for(int i=0;i<n;i++){
        if(v[i]>x)count++;
    }
    cout<<count;
    return 0;
}