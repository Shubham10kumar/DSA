#include<iostream>
using namespace std;
int stair(int n){
    if(n==1) return 1;
    if(n==2) return 2;
    return stair(n-1)+stair(n-2);

}
int main(){
    int n;
    cout<<"Enter the length of stair case :";
    cin>>n;
    cout<<stair(n);
    return 0;
}