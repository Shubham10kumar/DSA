#include <iostream>
using namespace std;
void swap(int x,int y){
    int temp;
    temp=x;
    x=y;
    y=temp;
}
int main(){
    int x,y;
    cout<<"enter the x and y: ";
    cin>>x>>y;
    swap(x,y);
    cout<<x<<" "<<y;

}