#include<iostream>
using namespace std;
void find(int n,int *ptr1,int *ptr2){
    *ptr2=n%10;
     while(n>9){
        n/=10;
     }
     *ptr1=n;
}
int main(){
    int num;
    cout<<"Enter the number : ";
    cin>>num;
    int last,first;
    // int *pt1=&first;
    // int *pt2=&last;
    // find(num,pt1,pt2);
    find(num,&first,&last);
    cout<<first<<" "<<last;

}