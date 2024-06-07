#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter the number : ";
    cin>>x;
    if(x%3==0 ||x%5==0)
    {
        if(x%15!=0)
        {
            cout<<"Divisible by 3 or 5 but not by 15 ";
        }
        else{
            cout<<"Not matching condition ";
        }
    }
     else{
            cout<<"Not matching condition ";
        }
    return 0;
}