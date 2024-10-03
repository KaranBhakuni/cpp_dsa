#include<iostream>
#include<algorithm>
using namespace std;

int main(){

    // reverse function is defined in <algorithm> header file
    int arr[5]={1,2,3,4,5};//all values wil be 0 in array
    // for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++)
    // {
    //     cout<<arr[i]<<" ";
    // }
    reverse(arr,arr+4);//it is a permanent operation
    sort(arr,arr+5);
    reverse(arr,arr+5);
    // cout<<arr;
    for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++)
    {
        cout<<arr[i]<<" ";
    } 
    int k = min(3,4);
    cout<<"min values is "<<k;
}