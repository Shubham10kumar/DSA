#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector <int> v;
    v.push_back(10);
    cout<<"Capacity is: "<<v.capacity()<<endl;
    cout<<"Size is: "<<v.size()<<endl;
    v.push_back(20);
    cout<<"Capacity is: "<<v.capacity()<<endl;
    cout<<"Size is: "<<v.size()<<endl;
    v.push_back(30);
    cout<<"Capacity is: "<<v.capacity()<<endl;
    cout<<"Size is: "<<v.size()<<endl;
    v.push_back(40);
    cout<<"Capacity is: "<<v.capacity()<<endl;
    cout<<"Size is: "<<v.size()<<endl;
    cout<<v[0]<<" ";
    cout<<v[1]<<" ";
    cout<<v[2]<<" ";
    cout<<v[3]<<" ";
}