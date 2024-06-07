#include <iostream>
using namespace std;
int main()
{   int a,b,c;
cout<<"Enter 3 Integers : "<<endl;
cin>>a>>b>>c;
if((a>>b)&&(a>>c)){
    cout<<"a is Largest";
}
else if((b>>a)&&(b>>a)){
    cout<<"b is Largest";
}
else{
    cout<<"c is largest";
}
    return 0;
}