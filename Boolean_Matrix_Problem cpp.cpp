
#include <stdio.h>
#include <iostream>
using namespace std;
int main()
{
    int row;
    cin>>row;
    int col;
    cin>>col;
    int arr[row][col];
    
    for(int i=0;i< row;i++){
        for(int j=0;j<col;j++){
            cin>>arr[i][j];
        }
    }
    bool is_one = false;
    
    for(int i=0;i<row;i++){
        is_one=false;
        
        for(int j=0;j<col;j++){
            if(arr[i][j]==1){
                is_one=true;
                break;
            }
        }
        if(is_one==true){
            for(int j=0;j<col;j++){
                arr[i][j]=1;
            }
        }
        
        is_one=false;
    }
    cout<<"\n";
    cout<<"Output\n";
    for(int i=0;i< row;i++){
        for(int j=0;j<col;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }
    

    return 0;
}
