#include<iostream>
using namespace std;
void reverse(int arr[],int start, int end){


    int i=start;
    int j=end;
    int temp=0;
    while (i<j)
    {
        temp=arr[j];
        arr[j]=arr[i];
        arr[i]=temp;
        i++;
        j--;
    }
}
void rotate(int arr[],int size, int k){

    int n=k%size;
    reverse(arr,0,size-n-1);
    reverse(arr,size-n,size-1);
    reverse(arr,0,size-1);

}

int main(){

    int size;
    cout<<"enter the size of array "<<endl;
    cin>>size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
    cout<<"no of time "<<"\n";
    int k;
    cin>>k;

    rotate( arr,size, k);
    for (int  i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}