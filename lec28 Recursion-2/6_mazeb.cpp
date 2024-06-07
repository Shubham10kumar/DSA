#include<iostream>
#include<string>
using namespace std;
int maze(int dr,int dc){
   
    if (dr==0 || dc==0) return 1;
    int rightWays=maze(dr,dc-1);//right
    int downWays=maze(dr-1,dc);//down
    return rightWays+downWays;
}
void print(int dr,int dc,string s){
    if (dr<0 || dc<0) return ;
    if(dr==0 && dc==0) {
        cout<<s<<endl;
        return;
    }
    print(dr,dc-1,s+'R');
    print(dr-1,dc,s+'D');
}
int main(){
    cout<<maze(2,2)<<endl;//starting point is (0,0)
    print(2,2,"");
    return 0;
}