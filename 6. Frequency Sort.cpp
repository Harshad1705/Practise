#include <queue>
#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{  int arr[]={1,1,1,3,2,2,4};
    int n= sizeof(arr)/sizeof(arr[0]);
    int k=2;
    unordered_map<int,int> mp;
    priority_queue< pair<int,int>> minH ;
    
    for(int i=0;i<n;i++){
        mp[arr[i]]++;
    }
    
    
    for(auto i:mp){
        cout<<i.first<<" "<<i.second<<"\n";
    }
    
    for(auto i:mp){
        minH.push({i.second,i.first});
        
    }
    
    while(minH.size()>0){
        int x = minH.top().first;
        for(int i=0;i<x;i++){
            cout<<minH.top().second<<" ";
        }
        minH.pop();
    }
    
   
    

    return 0;

}
