#include<iostream>
#include<vector>
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
    // void rotate(vector<int>& d,int k)
    // {
    //     reverse(d,0,d.size()-k-1);
    //     reverse(d,d.size()-k,d.size()-1);
    // }

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
    int k;
    cout<<"Enter the value of k :";
    cin>>k;
    
    // rotate(v1,k);
    k=k%v1.size();
    reverse(v1,0,v1.size()-k-1);
    reverse(v1,v1.size()-k,v1.size()-1);
    reverse(v1,0,v1.size()-1);
    display(v1);
}