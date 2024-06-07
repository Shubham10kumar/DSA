#include<iostream>
using namespace std;
void print(string str,int idx,int n,string ans,bool flag){
    if(idx==n){
        cout<<ans<<endl;
        return;
    }
    char ch=str[idx];
    if(n-idx==1){
        print(str,idx+1,n,ans+ch,true);//left
        print(str,idx+1,n,ans,true);//right
        return ;
    }
    char dh=str[idx+1];
    if(dh==ch){
        if(flag==true){
            print(str,idx+1,n,ans+ch,true);//left
        }
        print(str,idx+1,n,ans,false);//right
    }
    else{
        if(flag==true){
            print(str,idx+1,n,ans+ch,true);//left
        }
            print(str,idx+1,n,ans,true);//right
    }


   
}
int main(){
    string str="aaab";
    string ans="";
    print(str,0,4,ans,true);
    return 0;
}