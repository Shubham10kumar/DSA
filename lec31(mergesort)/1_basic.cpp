#include<iostream>
#include<vector>
using namespace std;
vector<int> merge(vector<int>& arr1,vector<int>& arr2){
    int i=0;
    int j=0;
    int k=0;
    int n=arr1.size();
    int m=arr2.size();
    vector<int> arr3(m+n);
    while(i<=n-1 && j<=m-1)
    {
        if(arr1[i]<arr2[j]){
            arr3[k]=arr1[i];
            i++;
        }
        else{  //arr1[i]>arr2[j]
            arr3[k]=arr2[j];
            j++;
        }
        k++;
    }
     while (i < n) {
        arr3[k] = arr1[i];
        k++;
        i++;
    }

    while (j < m) {
        arr3[k] = arr2[j];
        k++;
        j++;
    }

    return arr3;
}
int main(){
    vector<int> arr1;
    arr1.push_back(1);
    arr1.push_back(3);
    arr1.push_back(7);
    arr1.push_back(9);
    vector<int> arr2;
    arr2.push_back(2);
    arr2.push_back(4);
    arr2.push_back(6);
    arr2.push_back(8);

    vector<int> v;
    v=merge(arr1,arr2);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}