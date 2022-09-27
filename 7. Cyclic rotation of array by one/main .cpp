
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
        
        int last =arr[len-1];
        for(int i=len-1;i>=0;i--){
            arr[i]=arr[i-1];
            
        }
        
        arr[0]=last;
    
    
        for(int i=0;i<len;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
       
    }
    return 0;
}