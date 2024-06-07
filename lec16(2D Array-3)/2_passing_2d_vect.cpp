#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector < vector<int> > v(5,vector<int> (2,3));
    cout<<v[0][1]<<" ";
    cout<<v[1][0]<<" ";
    cout<<v[2][1]<<endl;
    for(int i=0;i<5;i++){
        for(int j=0;j<2;j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"Row of 2d vector : "<<v.size()<<endl;
    cout<<"Col of 2d vector : "<<v[0].size()<<endl;
    return 0;
}