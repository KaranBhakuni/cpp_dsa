// rotate array clockwise by one position
// [1,2,3,4,5]-->[5,1,2,3,4]

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    int arr[n];
    for (int  i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int last = arr[n-1];
    for (int i = n-1; i >0; i++)
    {
        arr[i]=arr[i-1];

    }
    arr[0]=last;
    for (int  i = 0; i < n; i++)
    {
        cout<<arr[i];
    }
    



    return 0;
}