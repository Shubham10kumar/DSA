//Sort a string in decreasing order of values associated
// after removal of values smaller than X
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    string s="AZYZXBDJKX";
    string a;
    for(int i=0 ; i<s.size();i++)
    {
        if(s[i] > 87)
        {
            a.push_back(s[i]);
        }
    }
    int n = a.size();
    for(int i=0;i<n;i++)
    {   
        bool flag = true;
        for(int j=0 ; j < n-1-i ; j++ )
        {
            if(a[j] < a[j+1]){
                swap(a[j],a[j+1]);
                flag = false;
            }
        }
        if(flag == true ) break;
    }
    cout<<a;
    return 0;
}