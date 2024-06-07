#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;
    int arr[n];
    for(int i=0 ; i<n ; i++)
    {
        cin>>arr[i];
    }
    // selection sort
    for(int i=0; i<n-1 ; i++)
    {
        int min = i;
        // Minimum Element Calculation in Orange Box
        for(int j=i ; j<n ; j++)
        {
            if(arr[min] > arr[j])
                min = j;
        }
        swap(arr[i],arr[min]);
    }
    for(int ele : arr){
        cout << ele <<" ";
    }
    return 0;
}