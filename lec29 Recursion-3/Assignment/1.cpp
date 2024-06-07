#include<iostream>
using namespace std;
void print(int num,int ans){
    if(num==0){
        cout<<ans;
        return;
    }
    int ans2= num % 10;
    print(num/10,(ans*10)+ans2);
}
int main(){
    int num=23451;
    print(num,0);
    return 0;
}