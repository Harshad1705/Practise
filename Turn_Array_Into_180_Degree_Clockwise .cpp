
#include <stdio.h>
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n][n];
    int res[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
     for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            res[n-1-i][n-1-j]=arr[i][j];
        }
    }
    cout<<"\n";
     for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<res[i][j]<<" ";
        }
        cout<<"\n";
    }
    
    return 0;
}
