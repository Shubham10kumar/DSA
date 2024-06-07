#include<iostream>
using namespace std;
void print(string ans,int n){
    if(ans.size()==n){
        cout<<ans<<endl;
        return;
    }
    print(ans+'0',n);
    if(ans[ans.size()-1]!='1') print(ans+'1',n);
}
int main(){
    print("",0);
    return 0;
}