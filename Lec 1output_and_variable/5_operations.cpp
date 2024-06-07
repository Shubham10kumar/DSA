#include<iostream>
using namespace std;
int main()
{   int x = 6;
    cout << ++x<<endl;  //pre increment->First increment and then print
    cout << x++<< endl; //post increment ->First print and then increment
    cout << x <<endl;

    int y = 8;
    cout<<--y<<endl;   //pre decrement->First decrement and then print 
    cout<<y--;        //post decrement ->First print and then decrement

    return 0;
}