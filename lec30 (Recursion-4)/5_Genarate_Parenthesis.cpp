#include<iostream>
using namespace std;
// void generate(string ans,int o,int c,int n){
//     if( c==n){
//         cout<<ans<<endl;
//         return;
//     }
//     if(o<n)
//     generate(ans+'(',o+1,c,n);
//     if(o>c)
//     generate(ans+')',o,c+1,n);

// }
int main(){
    int n=6;
    // generate("",0,0,n);
    // return 0;
    long long m = 1000000007;
        long long ans = 1;
        long long k = 1;
        long long res = 0;
        
        for(int i=1; i<=n; i++){
            ans = 1;
            for(int j=0; j<i; j++){
                ans = (ans * k);
                k++;
            }
            res = (res + ans);
        }
    cout<<res;
}