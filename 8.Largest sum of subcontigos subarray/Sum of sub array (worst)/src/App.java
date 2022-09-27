 
//  time complexity =O(n^3)
 
 class SumOfSubArray {
    public static void main(String[] args)  {
            int arr[]={1,2,3,-2,5};
            int len =arr.length;

            int max=0;
        

        for(int i=0;i<len;i++){
            for(int j=0;j<len;j++){
                int sum=0;
                for(int k=0;k<=j;k++){
                    sum=sum+arr[k];
                }
                if(sum>max){
                    max=sum;
                }
            }
        }

        System.out.println(max);
    }
}
