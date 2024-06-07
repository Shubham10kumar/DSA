#include<iostream>
using namespace std;
int main(){
    int arr[5]={23,34,56,78,1};
    int* ptr=arr;
    // int* ptr=&arr[0];
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
}