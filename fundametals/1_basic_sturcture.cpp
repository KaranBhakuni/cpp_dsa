#include<iostream> //i/o header file

using namespace std; // std defination

int main(){
    //code here
    //cin>> for input   <<endl; next line
    //cout<< for output

    // data types 
    int a=4;
    float f =4.3;
    char c= 'a';
    bool b=true;
    // 2 input together cin>>a>>b;

    // array 


    int arr[5]={0};//all values wil be 0 in array
    for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}