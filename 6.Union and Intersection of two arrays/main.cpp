
#include <iostream>

using namespace std;

void AppendInArray(int arr[] , int app_arr[] ,int len , int insertAfter){
    for(int i=0;i<len;i++){
        arr[i+insertAfter]=app_arr[i];
    }
}

void displayArray(int arr[] , int len){
    for(int i=0;i<len;i++){
        cout<<arr[i]<<" ";
    }
}

void displayuniqueElement(int arr[],int len){
    for(int i=0;i<len;i++){
        if(arr[i]!=0){
            cout<<arr[i]<<" ";
        }
    }
}

void sortArray(int arr[],int len){
    for(int i=0;i<len;i++){
        for(int j=i+1;j<len;j++){
            if(arr[i]>arr[j]){
                int temp = arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
    }
}

void UniqueElement(int arr[],int len){
   for(int i=0;i<len-1;i++){
        if(arr[i]==arr[i+1]){
            arr[i+1]=0;
        }
    }
}
void complementArray(int arr[],int c_arr[],int len){
    for(int i=0;i<len;i++){
        if(arr[i]==arr[i+1]){
            c_arr[i]=arr[i];
        }
        else{
            c_arr[i]=0;
        }
    }
}

int main()
{
    int arr_1[] = { 1,2,3,4,5,6,7};
    int arr_2[] = { 8,9,1,2,3,4};
    
    int len_1 = sizeof(arr_1)/sizeof(arr_1[0]);
    int len_2 =sizeof(arr_2)/sizeof(arr_2[0]);
    
    
    int len = len_1+len_2;
    int arr[len];
    int comp_array[len];
    
    cout<<"Length of first array :" <<len_1 <<"\n";
    cout<<"Length of second array : " <<len_2<<"\n";
    
    AppendInArray(arr,arr_1,len_1 ,0);
    AppendInArray(arr,arr_2,len_2 ,len_1);
    
    cout<<"Combination of both array :"<<"\n";
    displayArray(arr ,len);
    
    sortArray(arr,len);
    
    cout<<"\nSorted Array :"<<"\n";
    displayArray(arr ,len);
    
    complementArray(arr,comp_array,len);
    UniqueElement(arr,len);
    
    cout<<"\nUnique Array :"<<"\n";
    displayArray(arr ,len);
    
    cout<<"\nComplement :"<<"\n";
    displayuniqueElement(comp_array,len);
    
    cout<<"\nUnion :"<<"\n";
    displayuniqueElement(arr,len);
    
    
    
    
    
    
    return 0;
}


