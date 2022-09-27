#include <iostream>
#include <queue>
using namespace std;
 
int main()
{
    priority_queue<int> maxH;
    int arr[] ={7,10,4,3,20,15};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k=3;
    
    for(int i=0;i<n;i++){
        
        maxH.push(arr[i]);
        
        if(maxH.size()>k){
            maxH.pop();
        }
    }
    
   cout<<maxH.top();
    
 
    return 0;
} 