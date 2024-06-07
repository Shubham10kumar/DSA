#include<iostream>
using namespace std;
int main(){
    int x1,y1;
    cout<<"Enter the 1st point : ";
    cin>>x1>>y1;
    int x2,y2;
    cout<<"Enter the 2nd point : ";
    cin>>x2>>y2;
    int x3,y3;
    cout<<"Enter the 3rd point : ";
    cin>>x3>>y3;
    if(((y1-y2)/(x1-x2))==((y3-y2)/(x3-x2)))
    {
        cout<<"All 3 points lie on same line.";
    }
    else{
        cout<<"All 3 points do not lie on same line.";
    }
    return 0;
}