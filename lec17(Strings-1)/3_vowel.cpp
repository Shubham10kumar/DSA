#include<iostream>
#include<string>
using namespace std;
int main(){
    string name;
    getline(cin,name);
    int count=0;
    int i=0;
    while(name[i]!='\0'){
        if(name[i]=='a' || name[i]=='u' ||name[i]=='o' ||name[i]=='i' ||name[i]=='e' ) {
            count++;
        }
        i++;
    }
    cout<<count;       
    return 0;
}
    