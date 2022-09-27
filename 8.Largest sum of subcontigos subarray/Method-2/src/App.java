// time complexity = O(n^2)
// by using prefix sum of array

// a[]={1,2,3,4,5}
// pre arr[]={ 0,1 , 2+1 ,3+2+1 ,4+3+2+1 , 5+4+3+2+1}   // prefix sum of array

public class App {
    public static void main(String[] args)  {
        int arr[]={1,2,3,-2,5};
        int len =arr.length;
        int max=0; 

        int[] pre =new int[len+1];
        pre[0]=0;
        for(int i=1;i<=len;i++){
            pre[i] = pre[i-1]+arr[i-1];
        }


        for(int i=1;i<len+1;i++){
            for(int j=i;j<len+1;j++){
                int s = pre[j]-pre[i-1];
                if(s>max){
                    max=s;
                }
            }
        }
        System.out.println(max);
    }
}
