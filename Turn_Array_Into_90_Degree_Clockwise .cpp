
#include <stdio.h>
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n][n];
    int help_arr[n];
    int new_arr[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            help_arr[j]=arr[i][j];
        }
        for(int j=0;j<n;j++){
            new_arr[j][n-1-i]=help_arr[j];
        }
    }
    cout<<"\nOutput\n";
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<new_arr[i][j]<<" ";
        }
        cout<<"\n";
    }
  
    
    
    return 0;
}
