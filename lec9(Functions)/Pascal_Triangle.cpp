#include<iostream>
using namespace std;
int fact (int n){
    int fact=1;
    for(int i=2;i<=n;i++){
        fact*=i;
    }
    return fact;
}
int combination(int n,int r){
    int ncr=fact(n)/(fact(r)*fact(n-r));
    return ncr;
}
int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    for(int i=0;i<=n;i++){
        for(int j=0; j<=i ; j++){
                int ncr=combination(i,j);
                cout<<ncr;
            }
            cout<<endl;
        }
        
    }
