#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector <int> v;
    int x,y;
    cout<<"Enter the number : ";
    cin>>x;
    int n;
    cout<<"Enter the size : ";
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>y;
        v.push_back(y);
}
for(int i=0;i<=v.size()-2;i++){
    for(int j=i+1;j<=v.size()-1;j++){
        if((v[i]+v[j])==x){
            
            cout<<"("<<i<<" " <<j<<")"<<endl;
        }
    }
}
}