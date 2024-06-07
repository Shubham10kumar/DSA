#include<iostream>
#include<string>
using namespace std;
int maze(int sr,int sc,int dr,int dc){
    if (sr==dr || sc==dc) return 1;
    int rightWays=maze(sr,sc+1,dr,dc);
    int downWays=maze(sr+1,sc,dr,dc);
    return rightWays+downWays;
}
void print(int sr,int sc,int dr,int dc,string s){
    if (sr>dr || sc>dc) return ;
    if(sr==dr && sc==dc) {
        cout<<s<<endl;
        return;
    }
    print(sr,sc+1,dr,dc,s+'R');
    print(sr+1,sc,dr,dc,s+'D');
}
int main(){
    print(0,0,2,2,"");
    return 0;
}