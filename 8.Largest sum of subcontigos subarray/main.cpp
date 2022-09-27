
#include <iostream>

using namespace std;

int main()
{
   int t;
   cin>>t;
   while(t--){
       int n;
       cin>>n;
       
        int arr[n];
        
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int len = sizeof(arr)/sizeof(arr[0]);
        
        int max = 0;
        int max_till_here=0;
        
        for(int i=0;i<len;i++){
            max_till_here=arr[i];
            if(max_till_here>max){
                max = max_till_here;
            }
            if(max_till_here<0){
                max_till_here=0;
            }
        }
        
        cout<<max<<endl;
        
        
    }
    return 0;
}