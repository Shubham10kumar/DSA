#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;
int main(){
    vector<int>  v;
    v.push_back(19);
    v.push_back(12);
    v.push_back(23);
    v.push_back(8);
    v.push_back(16);
    //if only positive ya range mei number diya hai
    int k=0;
    for(int i=0;i<5;i++){
        int mindx=-1;
        int min=INT_MAX;
        for(int j=0 ; j<5 ; j++){
            if(v[j]<=0) continue;
            else{
                if(min > v[j]){
                min = v[j];
                mindx=j;
                }
            }  
        }
        v[mindx]=k;
        k--;
    }
    for(int ele : v){
        cout<<abs(ele)<<" ";
    }
    return 0;
}