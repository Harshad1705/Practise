
#include <stdio.h>
#include <iostream>
using namespace std;

void move_array_clockwise(int arr[],int size){
    int k = size;
    int t=arr[size-1];
    for(int i=1;i<size;i++){
        arr[size-i]=arr[size-i-1];
    }
    arr[0]=t;
    
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
}

int main()
{
    int arr[] = {1,2,3,4,5,6};
    int size=6;
    int n=14;   // if number is large then use n%size , it give same result 
    
    for(int i=0;i<n%size;i++)
    move_array_clockwise(arr,size);

    return 0;
}
