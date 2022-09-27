public class App {
    public static void main(String[] args) {

        int arr[]={-1,2,-3,5,6,8,-8,-5};
        int len =arr.length;
        int low = 0;
        int mid = 0;

        while(mid<len){
            if(arr[mid]<0){
                int temp =arr[mid];
                arr[mid]=arr[low];
                arr[low]=temp;

                mid++;
                low++;
            }else if(arr[mid]>0){
                mid++;
            }
        }
        
        for( int i=0;i<len;i++){
            System.out.print(arr[i]+" ");
        }
        
        
    }
}
