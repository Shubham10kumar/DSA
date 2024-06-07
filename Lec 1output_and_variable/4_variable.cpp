#include<iostream>
using namespace std;
int main()
{   
    int x = 4;       //a box of x is created in memory which  contains 4
    cout<< x<<endl;
    x=45;           //value of x is updated
    cout<< x<<endl;
    x = x - 23;     // here 23 is substracted from old x value 
    cout<< x<<endl; // and this is new value stored in x
    x += 2;
    cout<< x<<endl;

    int y =  5;
    cout<< x + y<<endl;
    cout<< x - y<<endl;
    cout<< x * y<<endl;
    cout<< x / y<<endl;

    int z = x + y;
    cout<< z <<endl;
    return 0;
}
