//Print the sum of series => 1-2+3-4+5-6.....n terms
#include<iostream>
using namespace std;
int main(){
     int n;
     cout<<"Enter the number of terms : ";
     cin>>n;
     int sum=0;

     if(n%2==0){
        sum= -n/2;
     }
     else{
        sum = -(n-1)/2 + n;
     }
      cout<<sum;
      
    //  for(int i=1;i<=n;i++)
    //  {
    //     if(i%2==1) sum+=i;
    //     else       sum-=i;
    //  }
    //  cout<<sum;


//      int sum1=0;
//      int sum2=0;
//      for(int i=1;i<=n;i+=2)
//      {
//         sum1+=i;
//      }
//      for(int i=2;i<=n;i+=2)
//      {
//         sum2+=i;
//      }
//      cout<<sum1-sum2;

 }