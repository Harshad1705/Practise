
#include <stdio.h>
#include <iostream>
using namespace std;



void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}


int binarySearch(int arr[],int n,int val){
    int l=0;
    int r=n;
    int ans=-1;
    
    while(l<=r){
        int mid = (l+r)/2;
        if(arr[mid]==val){
             ans=mid;
             r=mid-1;
        }else if(arr[mid]<val){
            l=mid+1;
        }else{
            r=mid-1;
        }
    }
    return ans;
}

int linearSearch(int arr[] , int n,int val){
    for(int i=0;i<n;i++){
        if(arr[i]==val){
            return i;
        }
    }
    return -1;
}

int main()
{
    int arr[]={10,30,50,60,20};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    printArray(arr,n);
    cout<<endl;
    
    int lin_search = linearSearch(arr,n,60);
    cout<<lin_search<<endl;
    
    
    int arr2[] = {10,20,20,30,60,60,60};
    int n2 = sizeof(arr2)/sizeof(arr2[0]);
    
    printArray(arr2,n);
    
    cout<<endl;
    
    int bin_search = binarySearch(arr2,n2-1,30);
    cout<<bin_search<<" ";
    
    return 0;
}
