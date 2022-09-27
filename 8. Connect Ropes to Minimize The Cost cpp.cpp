#include <queue>
#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{  int sum=0;
    int arr[]={1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    priority_queue<int,vector<int>,greater<int>> minH;
     
    for(int i=0;i<n;i++){
        minH.push(arr[i]);
    }
    
    while(minH.size()>=2){
        int x =minH.top();
        minH.pop();
        int y = minH.top();
        minH.pop();
        
        sum = sum+x+y;
        
        minH.push(x+y);
        
    }
    
    cout<<sum;
     
    

    return 0;

}
