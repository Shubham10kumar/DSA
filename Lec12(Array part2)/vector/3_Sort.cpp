#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector <int> v;
    v.push_back(2);
    v.push_back(4);
    v.push_back(7);
    v.push_back(22);
    v.push_back(20);
    v.push_back(78);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;

    sort(v.begin(),v.end());
       for(int i=0;i<v.size();i++){
            cout<<v[i]<<" ";
    }
    cout<<endl;
}