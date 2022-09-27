
#include <stdio.h>
#include <iostream>
using namespace std;

void towerOfHanoi(int n,char source , char dest , char helper){
    if(n==0) return;
    towerOfHanoi(n-1,source,helper,dest);
    cout<<"Move disk "<<n<<" from "<<source<<" to "<<dest<<endl;
    towerOfHanoi(n-1,helper,dest,source);
}

int main()
{
    towerOfHanoi(5,'A','B','C');
}
