#include<iostream>
using namespace std;
int main(){
    //Seeing how can i change
    int x,y;
     int *p1=&x;
    int *p2=&y;
    cout<<"Enter x and y: ";
    cin>>*p1>>*p2;
   
    cout<<*p1+*p2;
}
