#include<iostream>
#include<vector>
using namespace std;
void display( vector<int>& a){
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
int main(){
    vector<int> v1;
    v1.push_back(3);
    v1.push_back(32);
    v1.push_back(53);
    v1.push_back(1);
    v1.push_back(4);
    v1.push_back(78);
    v1.push_back(9);
    display(v1);
    vector<int> v2(v1.size());
    for(int i=0;i<v1.size();i++){
        v2[i]=v1[v1.size()-i-1];
    }
    cout<<"Reverse order: "<<endl;
    display(v2);


}