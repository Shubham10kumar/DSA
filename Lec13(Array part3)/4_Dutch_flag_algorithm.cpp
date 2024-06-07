#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void display(vector<int>& a){
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
}
void sort(vector<int>& b){
    int low=0;
    int high=b.size()-1;
    int mid= 0;
    while(mid<=high)
    {
        if(b[mid] == 1)
        {
            mid++;
        }
        else if(b[mid] == 2)
        {
            swap(b[mid],b[high]);
            high--;
        }
        else if(b[mid] == 0)
        {
            swap(b[mid],b[low]);
            low++;
            mid++;
        }
    }
}
int main(){
    vector <int> v;
    v.push_back(2);
    v.push_back(0);
    v.push_back(2);
    v.push_back(1);
    v.push_back(1);
    v.push_back(0);
    display(v);
    cout<<endl;
    sort(v);

    display(v);

}