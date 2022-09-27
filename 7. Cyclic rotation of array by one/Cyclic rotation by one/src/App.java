 class CyclicRotation {
    public static void main(String[] args)  {

        int arr[]={1,2,3,4,5};
        int len = arr.length;
        int temp = arr[len-1];
    

        for(int i=len-1;i>0;i--){
            arr[i]=arr[i-1];
        }
        arr[0]=temp;

        for(int i=0;i<len;i++){
            System.out.print(arr[i]+" ");
        }
        
    }
}
