/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
    int arr[]={ 1,0,2,0,1,2,1};
    int len = sizeof(arr)/sizeof(arr[0]);
    cout<<len<<"\n";
    
    int low = 0;
    int mid = 0;
    int high = len - 1;
    
    while(mid<high){
        if(arr[mid]==0){
            int temp = arr[mid];
            arr[mid]=arr[low];
            arr[low]=temp;
            
            mid++;
            low++;
        }
        else if(arr[mid]==1){
            mid++;
        }
        else if(arr[mid]==2){
            int temp =arr[mid];
            arr[mid]=arr[high];
            arr[high] = temp;
            
            mid++;
            high--;
        }
    }
    
    for(int i=0;i<len;i++){
        cout<<arr[i]<<" ";
    }
}