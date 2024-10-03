#include<iostream>
using namespace std;
int main(){

    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++)
    {
        cin>>arr[i];
    }
    int value;
    cout<<"enter the value to check last index"<<"\n";
    cin>>value;
    int index=-1;
    for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++)
    {
        if (arr[i]==value)
        {
            index=i;
        }
        
    }
    cout<<"last index of "<<value<<" is "<<index;
    

    return 0;
}