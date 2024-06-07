#include<iostream>
using namespace std;
int main(){
    int arr[5]={23,34,56,78,1};
    int* ptr=arr;//ptr stores address of first element of arr
    int* gtr=ptr;
    // int* ptr=&arr[0];
    for(int i=0;i<5;i++){
        cout<<*ptr<<" ";
        ptr++;
    }
    cout<<endl;
   ptr=arr;
   *ptr=90;
   ptr++;
   *ptr=20;
   ptr--;
   for(int i=0;i<5;i++){
        cout<<*ptr<<" ";
        ptr++;
    }
    cout<<endl;
//    ptr=arr;
}