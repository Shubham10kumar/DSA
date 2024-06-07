#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector <int> v;
    int n;
    cout<<"Enter the size of vector : ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x;
        cout<<"Enter the "<<i+1 <<" number :";
        cin>>x;
        v.push_back(x);
    }
    cout<<v.size()<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}