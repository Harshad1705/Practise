// sorting is not allowed but swapping allowed

public class App {
    public static void main(String[] args)  {
        int arr[] ={ 1,0,2,0,1,2,1};
        int len = arr.length;

        System.out.println(len);

        int low = 0;
        int mid = 0;
        int high = len-1;

        displayArray(arr, len);

        while(mid<high){
            if(arr[mid]==0){
                int temp = arr[mid];
                arr[mid]=arr[low];
                arr[low]=temp;

                mid++;
                low++;
            }
            else if(arr[mid]==1){
                mid++;
            }
            else if(arr[mid]==2){
                int temp = arr[mid];
                arr[mid]=arr[high];
                arr[high]=temp;

                mid++;
                high--;
            }
        }

        System.out.println();
        displayArray(arr, len);

        

        

}
public static void displayArray(int arr[],int len) {
    for(int i=0;i<len;i++){
        System.out.print(arr[i]+" ");
    }
}
}
