#include <iostream>
#include <queue>
using namespace std;
 

 
// Driver Code
int main()
{
    priority_queue<int, vector<int>, greater<int> > maxH;
    int arr[] ={6,5,3,2,10,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k=3;
    int new_arr[n];
    
    for(int i=0;i<n;i++){
        
        maxH.push(arr[i]);
        
        if(maxH.size()>k){
            cout<<maxH.top()<<" ";
            maxH.pop();
        }
    }
    
    while(maxH.size()>0){
        cout<< maxH.top()<<" ";
        maxH.pop();
    }
    
 
    return 0;
} 