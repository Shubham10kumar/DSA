#include<iostream>
using namespace std;
int power(int a,int b){
    if(b==0) return 1;
    return a*power(a,b-1);
    
}
// int pow(int a,int b){
//     int p=1;
//     for(int i=0;i<b;i++){
//         p*=a;
//     }
//     return p;
// }
int main(){
    cout<<power(3,5);// 3 raised to power 5 
    return 0;
}