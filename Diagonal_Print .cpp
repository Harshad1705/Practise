
#include <stdio.h>
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    for(int d=0;d<n;d++){
        for(int i=0,j=d;j<n;i++,j++){
            cout<<arr[i][j]<<" ";
        }
    }
    
    return 0;
}
