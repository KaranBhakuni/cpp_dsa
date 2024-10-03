#include <stdio.h> 
void merge(int arr[],int l,int mid,int r) 
{
    int n1=mid-l+1;
    int n2=r-mid; 
    int L[n1],R[n2]; 
    int i,j,k; 
    for(i=0;i<n1;i++) 
    {
        L[i]=arr[l+i];
    }
    for(j=0;j<n2;j++)
    {
        R[j]=arr[mid+j+1];
    } 
    i=0; j=0; k=l; 
    while(i<n1 && j<n2) 
    {
        if(L[i]<=R[j]) 
        { 
            arr[k]=L[i]; 
            k++; 
            i++;
        } else { 
            arr[k]=R[j]; 
            k++; 
            j++;
        }
    
    } 
    while(i<n1) 
    { arr[k++]= L[i++]; 
    } 
    while(j<n2) 
    { arr[k++]=R[j++]; 
    }
     
    } 
void mergesort(int arr[],int l,int r) 
{ 
    if(l<r) 
    { 
        int mid=l+(r-l)/2; 
        mergesort(arr,l,mid); 
        mergesort(arr,mid+1,r); 
        merge(arr,l,mid,r); 
    } 
} 
int main() { 
    int arr[]={12,11,13,5,6,7}; 
    int s=0; 
    int e=6; 
    mergesort(arr,0,e-1); 
    for(int i=0;i<e;i++) 
    { 
        printf("%d ",arr[i]); 
    } 
}