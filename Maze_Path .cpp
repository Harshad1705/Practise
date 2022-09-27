
#include <iostream>
using namespace std;

int countMazePath(int arr[][4] ,int row,int col,int rowsize, int colsize){   // change here arr[][**]
    
    if(row==rowsize-1 && col==colsize-1) return 1;
    if(row==rowsize || col==colsize) return 0;
    
   int pathfromRight = countMazePath(arr,row,col+1,rowsize,colsize);
   int pathfromBottom = countMazePath(arr,row+1,col,rowsize,colsize);
   
   return pathfromBottom+pathfromRight;
}


int main()
{
   int x[3][4]  ; // change here x[*][**]
   cout<<countMazePath(x,0,0,3,4);  // change here (x,0,0,*,**)

    return 0;
}