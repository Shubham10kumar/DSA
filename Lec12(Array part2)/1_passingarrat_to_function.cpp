#include<iostream>
using namespace std;
void display(int a[]){
    for(int i=0;i<5;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return;
}
void change(int b[]){
    b[0]=50;
}
int main(){
    int arr[]={2,45,6,78,23};
    display(arr);
    change(arr);
    display(arr);
}
