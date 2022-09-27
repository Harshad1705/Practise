#include <queue>
#include <iostream>
#include <unordered_map>
using namespace std;

int k_Smallest(int arr[],int k , int n){
    
    priority_queue<int> maxH;
    
     for(int i=0;i<n;i++){
        maxH.push(arr[i]);
        if(maxH.size()>k){
            maxH.pop();
        }
    }
    return maxH.top();
}

int main()
{  
    int arr[]={1,3,12,5,15,11};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k1=3;
    int k2=6;
    int sum=0;
   
    int first = k_Smallest(arr,k1,n);
    int second = k_Smallest(arr,k2,n);
   
    for(int i =0;i<n;i++){
        if(arr[i]>first && arr[i]<second){
            sum = sum+arr[i];
        }
    }
    
    cout<<sum;
    
 
    

    return 0;

}
