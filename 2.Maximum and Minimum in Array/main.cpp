
#include <iostream>

using namespace std;

void displayArray(int arr[] , int len){
    for(int i=0;i<len;i++){
        cout<<arr[i]<<" ";
    }
}


int maxInArray(int arr[] ,int len){
    int max = arr[0];
    for(int i = 0 ;i<len ; i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    return max;
}
int minInArray(int arr[] ,int len){
    int min = arr[0];
    for(int i = 0 ;i<len ; i++){
        if(min>arr[i]){
            min=arr[i];
        }
    }
    return min;
}


int main()
{
    int arr[] = {1,2,3,4,5,6};
    
    int len = sizeof(arr)/sizeof(arr[0]);
    
    cout<<"Array"<<"\n";
    displayArray(arr,len);
    cout<<"\n";
    
    cout<<"Maximum in Array :"<<maxInArray(arr,len)<<"\n";
    cout<<"Minimum in Array :"<<minInArray(arr,len)<<"\n";
   
    return 0;
}