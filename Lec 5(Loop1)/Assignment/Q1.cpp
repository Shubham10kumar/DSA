#include<iostream>
using namespace std;
int main(){
    // for(int i=1;i<=100;i+=2)
    // {
    //     cout<<i<<" ";
    // }

    // for(int i=1;i<=100;i++)
    // {
    //     if(i%2==1) cout<<i<<" ";
    // }
    
    int i=1;
    while(i<100)
    {
        if(i%2==1)
           cout<<i<<" ";
           i+=2;
    }
    return 0;
}