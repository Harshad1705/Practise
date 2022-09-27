public class App {
    public static void main(String[] args) {
        int arr[]={6,5,4,1,2,3};
        int k=4;
        int len = arr.length;
        System.out.println("Array :");

        dispalyArray(arr, len);

        bubble_sort(arr, len);

        System.out.println("\nSorted Array :");
        dispalyArray(arr, len);

        System.out.println("\n"+k+" highest elemnt : "+arr[len-k]);
        System.out.println(k+" smallest elemnt : "+arr[k-1]);
    }
    public static void bubble_sort(int arr[],int len) {
        for(int i =0;i<len-1;++i){
            for(int j=0;j<len-i-1;++j){
                if(arr[j]>arr[j+1]){
                    int temp =arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=temp;
                }
            }
        }
        
    }
    public static void dispalyArray(int arr[], int len) {
        for(int i=0;i<len;i++){
            System.out.print(arr[i]+" ");
            
        }
    }
}
