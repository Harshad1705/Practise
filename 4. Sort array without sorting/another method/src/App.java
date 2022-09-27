public class App {
    public static void main(String[] args)  {
        int arr[] = { 1,0,2,0,1,2,1};
        int len = arr.length;
        int zero=0;
        int one=0;
        int two=0;

        for(int i=0;i<len;i++){
            if(arr[i]==0){
                zero++;
            }else if(arr[i]==1){
                one++;
            }else if(arr[i]==2){
                two++;
            }
        }

        System.out.println(zero+""+one+""+two);
        changeArrayy(0, arr, zero , 0);
        changeArrayy(1, arr, one , zero);
        changeArrayy(2, arr, two , zero+one);
        
        displayArray(arr,len);

    }
   
    public static void changeArrayy(int num,int arr[],int len , int add) {
            for(int i =0;i<len;i++){
                arr[i+add]=num;
            }
        
    }
    public static void displayArray( int arr[] , int len) {
        for(int i=0;i<len;i++){
            System.out.print(arr[i]+" ");
        }
        
    }
}
