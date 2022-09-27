#include <iostream>
#include <queue>
using namespace std;

int main()
{
    priority_queue<int, vector<int>, greater<int> > minH;
    int arr[] ={7,10,4,3,20,15};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k=3;
    
    
    for(int i=0;i<n;i++){
        
        minH.push(arr[i]);
        
        if(minH.size()>k){
            minH.pop();
        }
    }
    
    cout<<minH.top();
    
 
    return 0;
} 