#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    cout<<"Enter the string : "<<endl;
    getline(cin,str);
    int m=str.size();
    int count=0;
    for(int i=0; i<m ; i++){
        if(m==1){
            break;
        }
        else if(m==2 && str[0] != str[1]){
            count =1;
            break;
        }
        else{
            if(i==0){
                if(str[i]!=str[i+1] ) count++;
            }
            else if(i==m-1){
                if(str[i]!=str[i-1]) count++;
            }
            else if(str[i] != str[i+1] && str[i] != str[i-1]) 
                count++;
        }
    }
    cout<<count;
    return 0;
}