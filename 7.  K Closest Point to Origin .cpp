#include <queue>
#include <iostream>
using namespace std;

int main()
{   int n = 4;
    int arr[n][2]={{1,3},{-2,2},{5,8},{0,1}};
    int k=2;
   
   priority_queue<pair<int,pair<int,int>>> maxH;
   
   for(int i =0;i<n;i++){
       
       int square = (arr[i][0]*arr[i][0])+(arr[i][1]*arr[i][1]);
       maxH.push({square,{arr[i][0],arr[i][1]}});
       
       if(maxH.size()>k){
           maxH.pop();
       }
   }
    
    while(maxH.size()>0){
        cout<<"{"<<maxH.top().second.first<<" "<<maxH.top().second.second<<"}"<<"\n";
        maxH.pop();
    }

    return 0;
}
