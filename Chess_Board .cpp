
#include <stdio.h>
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n][n];
    int count = 0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
            if(arr[i][j]==1){
                if(i%2==0){
                if(j%2==0){
                    count+=0;
                }else{
                    count++;
                }
            }else{
                if(j%2==0){
                    count++;
                }else{
                    count+=0;
                }
            }
            }
        }
    }
    if(count<=((n*n)/2)){
        count=count;
    }else{
        count =  (n*n)-count;
    }

    cout<<count;
    
    return 0;
}
