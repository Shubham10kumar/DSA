#include<iostream>
using namespace std;
int fact(int n){
    int fact=1;
    for(int i=2;i<=n;i++){
        fact*=i;
    }
    return fact;
}
int permutation(int n,int r){
    int npr=fact(n)/fact(n-r);
    return npr;
}
int main(){
    int n,r;
    cout<<"Enter the value of n and r : ";
    cin>>n>>r;
    int npr=permutation(n,r);
    cout<<npr;

}