#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>& a){
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
void sort(vector<int>& a){
    int cz=0;
    int co=0;
    for(int i=0;i<a.size();i++){
        if(a[i]==0)  cz++;
        if(a[i]==1)  co++;
    }
    for(int i=0;i<a.size();i++){
    if(i<cz)  a[i]=0;
    else  a[i]=1;
    }
}
int main(){
    vector <int> v1;
    v1.push_back(0);
    v1.push_back(1);
    v1.push_back(1);
    v1.push_back(0);
    v1.push_back(0);
    v1.push_back(1);
    v1.push_back(0);
    v1.push_back(1);
    display(v1);
    sort(v1);
    display(v1);
}