#include<iostream>
using namespace std;
int sum(int a,int b){
    if(a>b) return 0;
    if(a%2==1) return a+sum(a+1,b);
    else return sum(a+1,b);
}
int main(){
    cout<<sum(3,9);
    return 0;
}