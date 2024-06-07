#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the week number : ";
    cin>>n;
    switch(n){
        case 1 :
         cout<<"Monday";
         break;
        case 2 :
         cout<<"Tue";
         break;
        case 3 :
         cout<<"Wed";
         break;
        case 4 :
         cout<<"Thur";
         break;
        case 5 :
         cout<<"Fri";
         break;
        case 6 :
         cout<<"Sat";
         break;
        case 7 :
         cout<<"Sunday"; 
         break;  
         default :
          cout<<"Invalid Choice.";  
    }
    return 0;
}