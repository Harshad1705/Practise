#include <queue>
#include <unordered_map>
#include <iostream>
using namespace std;

int main()
{
    int arr[]={1,1,1,3,2,2,4};
    int n= sizeof(arr)/sizeof(arr[0]);
    int k=2;
    unordered_map<int,int> mp;
    priority_queue< pair<int,int> , vector<pair<int,int>> , greater<pair<int,int>>> minH ;
    
    for(int i=0;i<n;i++){
        mp[arr[i]]++;
    }
    
    
    for(auto i:mp){
        cout<<i.first<<" "<<i.second<<"\n";
    }
    
    for(auto i:mp){
        minH.push({i.second,i.first});
        if(minH.size()>k){
            minH.pop();
        }
    }
    
    cout<<"Most Frequent Number : \n";
    while(minH.size()>0){
        cout<<minH.top().second<<" ";
        minH.pop();
    }
    

    return 0;
}
