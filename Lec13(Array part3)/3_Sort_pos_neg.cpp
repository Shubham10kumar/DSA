#include<iostream>
#include<vector>
using namespace std;
void display(vector <int>& a){
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
void sort(vector<int>& a){
    int i=0;
    int j=a.size()-1;
    while(i<j){
    if(a[i]<0)  i++;
    else if(a[j]>0)  j--;
    else if(a[i]>0 && a[j]<0){
        int temp=a[i];
        a[i]=a[j];
        a[j]=temp;
        i++;
        j--;
    }
    }
}
int main(){
    vector<int> v;
    v.push_back(5);
    v.push_back(23);
    v.push_back(-6);
    v.push_back(89);
    v.push_back(-43);
    v.push_back(56);
    v.push_back(67);
    v.push_back(-40);
    display(v);
    sort(v);
    display(v);
}