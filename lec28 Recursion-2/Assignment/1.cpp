//Print array in reverse order
#include<iostream>
using namespace std;
void print(int arr[],int start,int n){
    if(n==start) return;
    print(arr,start+1,n);
    cout<<arr[start]<<endl;
}
int main(){
    int arr[]={1,2,3,4,5,6};
    print(arr,0,6);
    return 0;
}