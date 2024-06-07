#include<iostream>
#include<vector>
using namespace std;

void change(vector<int>& v){
    v[0]=1000;
}
void print(vector<int>& v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}
int main(){
    vector <int> v;
    v.push_back(2);
    v.push_back(4);
    v.push_back(7);
    v.push_back(22);
    v.push_back(20);
    v.push_back(78);
    print(v);
    cout<<endl;
    change(v);
    print(v);
    cout<<endl;
}