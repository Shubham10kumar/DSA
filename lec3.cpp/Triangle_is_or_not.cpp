#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "Enter 1st Side : ";
    cin >> a;
    cout << "Enter 2nd Side : ";
    cin >> b;
    cout << "Enter 3rd Side : ";
    cin >> c;
    if((a+b)>c && (c+b)>a && (a+c)>b){
        cout<<a<<","<<b<<","<<c<< "Is a triangle.";
    }
    else{
        cout<<"Not a triangle.";
    }
    return 0;
}