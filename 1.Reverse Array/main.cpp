#include <iostream>

using namespace std;

void displayArray(int arr[] , int len){
    for(int i=0;i<len;i++){
        cout<<arr[i]<<" ";
    }
}

void reverseArray( int arr[] , int len){
     int i = 0;
    int j = len -1 ;
   while(i<j)
   {
       int k = arr[i];
       arr[i]=arr[j];
       arr[j]=k;
       i++;
       j--;
   }
}

int main()
{
    int arr[] = {1,2,3,4,5,6};
    
    int len = sizeof(arr)/sizeof(arr[0]);
    
    cout<<"Array"<<"\n";
    displayArray(arr,len);
    cout<<"\n";
    reverseArray(arr ,len);
    cout<<"Reversed array "<<"\n";
    displayArray(arr,len);
   
    return 0;
}