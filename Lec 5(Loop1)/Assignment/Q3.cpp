// Print the table of ‘n’. Here ‘n’ is an integer which the user will input.

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    // for(int i=1;i<=10;i++){
    //     cout<<n<<" * "<<i<<" = "<<n*i<<endl;
    // }
    int i=1;
     while(i<=10)
     {
        cout<<n<<" * "<<i<<" = "<<n*i<<endl;
        i++;
     }
    return 0;
}