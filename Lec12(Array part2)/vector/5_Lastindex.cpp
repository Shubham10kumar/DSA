#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector <int> v;
    v.push_back(2);
    v.push_back(4);
    v.push_back(7);
    v.push_back(22);
    v.push_back(20);
    v.push_back(20);
    v.push_back(23);
    v.push_back(20);
    v.push_back(78);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    int x=20;
    int idx=-1;
    for(int i=0;i<v.size();i++){
        if(v[i]==x) idx=i;
    }
    if(idx ==-1) cout<<"No element in index.";
    else { cout<<"Element is at last : "<<idx;}
}



