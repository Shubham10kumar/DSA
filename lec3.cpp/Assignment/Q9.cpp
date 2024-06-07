#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter the character : ";
    cin>>ch;
    int ascii=(int)ch;
    if(ascii>=33 && ascii <=126){
        if(ascii>=48 && ascii <=57)
        {
            cout<<"Digit.";
        }
        else if(ascii>=65 && ascii <=90 || ascii>=97 && ascii <=122)
        {
            cout<<"Alphabet.";
        }
        else{
            cout<<"Special Character.";
        }
    }
    else{
         cout<<"Neither.";
    }
    return 0;
}