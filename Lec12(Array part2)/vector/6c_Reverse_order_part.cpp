#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void display(vector<int>& a){
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

void reverse(vector<int>& c,int a,int b){
      int i=a,j=b;
      while(i<j){
        int temp=c[i];
        c[i]=c[j];
        c[j]=temp;
        i++;
        j--;
      }

    }

int main(){
    vector <int> v1;
    v1.push_back(1);
    v1.push_back(3);
    v1.push_back(2);
    v1.push_back(4);
    v1.push_back(3);
    v1.push_back(4);
    v1.push_back(1);
    v1.push_back(6);
    display(v1);
    // reverse(v1.begin()+2,v1.end());
    reverse(v1,0,3);
    display(v1);
}


