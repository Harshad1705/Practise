
#include <iostream>

using namespace std;

void displayArray(int arr[] , int len){
    for(int i=0;i<len;i++){
        cout<<arr[i]<<" ";
    }
}





void bubbleSort(int array[], int size) {


  for (int i = 0; i < size; ++i) {
      
   
    for (int j = 0; j < size - i; ++j) {

   
      if (array[j] > array[j+1]) {

     
        int temp = array[j];
        array[j] = array[j + 1];
        array[j + 1] = temp;
      }
    }
  }
}


int main()
{
    int arr[] = {8,5,44,96,7,2,5,6,4};
    
    int len = sizeof(arr)/sizeof(arr[0]);
    
    cout<<"Array"<<"\n";
    displayArray(arr,len);
    cout<<"\n";
    int k=3;
    
    bubbleSort(arr,len);
    cout<<"Sorted Array : "<<"\n";
    displayArray(arr,len);
    cout<<"\n";
    
    cout<<k<<" highest element : "<<arr[len-k];
    cout<<"\n";
    cout<<k<<" smallest element : "<<arr[k-1];
   
    return 0;
}