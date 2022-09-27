
#include <iostream>

using namespace std;

int lastIndex(int arr[],int element,int index){
    
    if(index==0) return -1;
    
    if(arr[index]==element) return index;
    else return lastIndex(arr,element,index-1);
    
}


int main()
{
   int arr[]={4,1,6,2,6,4,1,7};
   int size = sizeof(arr)/sizeof(arr[0]);
   int element = 1;
   cout<<lastIndex(arr,element,size);

    return 0;
}