#include <iostream>
#include <queue>
using namespace std;

int main()
{
    priority_queue<pair<int,int>> maxH;
    int arr[] ={5,6,7,8,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k=3;
    int x=7;
    
    
    for(int i=0;i<n;i++){
        
        maxH.push({abs(arr[i]-x),arr[i]});
        
        if(maxH.size()>k){
            maxH.pop();
        }
    }
    while(maxH.size()>0){
        cout<<maxH.top().second<<" ";
        maxH.pop();
    }
    
    
 
    return 0;
} 