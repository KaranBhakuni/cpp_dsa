#include <stdio.h>
void swap(int *a,int *b) { int t=*a; *a=*b; *b=t; } 
int partition(int arr[],int l,int h) 
{ 
    int pivot=arr[l];
    int i=l; int j=h; 
    while(i<j) 
    { 
        do{ i++; }while(arr[i]<=pivot); 
        do{ j--; }while(arr[j]>pivot); 
        if(i<j) { swap(&arr[i],&arr[j]); }
    } 
    swap(&arr[l],&arr[j]); 
    return j; 
    }

int Quicksort(int arr[],int l,int h) {
    if(l<h) { 
        int j=partition(arr,l,h); 
        Quicksort(arr,l,j); 
        Quicksort(arr,j+1,h);
    }
} 
int main() { 
    int arr[]={10,16,8,12,15,6,3,9,5}; 
    int l=0; 
    int h=9; 
    Quicksort(arr,l,h); 
    for(int i=0;i<9;i++) { 
        printf("%d ",arr[i]); 
    } 
}