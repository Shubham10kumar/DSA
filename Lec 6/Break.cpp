//Prime nUmber 
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    bool flag = true;// true-> Prime
    for(int i=2;i<n;i++)
    {
        if(n%i==0){
            flag = false; //false=> Composite number
            break;
        }
    }
    if(flag==true)
         cout<<n<<"  is  a Prime Number.";
    else
         cout<<n<<"  is Not a Prime Number.";  
    return 0;
}