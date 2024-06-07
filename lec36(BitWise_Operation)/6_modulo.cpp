#include<iostream>
#include<climits>
using namespace std;
int main(){
    int a=INT_MAX;
    int remain1=(a%5+2%5)%5;
    cout<<a<<endl;
    cout<<a%5<<endl;
    cout<<remain1<<endl;

    int remain2=(a%5 * 2%5)%5;
    cout<<remain1<<endl;

    int remain3=(a%5 - 3%5 + 5)%5;
    cout<<remain3<<endl;
}