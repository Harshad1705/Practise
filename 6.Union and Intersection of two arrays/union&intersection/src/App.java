import java.util.*;

public class App {
    public static void main(String[] args)  {
        int arr1[] = {1,2,3,4,5,6};
        int arr2[] = {7,8,9,1,2,3};

        Set<Integer> set = new HashSet<>();

        unionOfTwonsortedArray(arr1, arr2, set);

        System.out.println("Union :\n"+set);
        System.out.println("Complement : ");
        complement(arr1, arr2);

    }
    public static void unionOfTwonsortedArray(int arr1[],int arr2[],Set<Integer> set) {
        int i=0;
        int j=0;

        while(i<arr1.length){
            set.add(arr1[i]);
            i++;
        }
        while(j<arr2.length){
            set.add(arr2[j]);
            j++;
        }
        
    }
    public static void complement(int arr1[],int arr2[]) {
        for(int i=0;i<arr1.length;i++){
            for(int j=0;j<arr2.length;j++){
                if(arr1[i]==arr2[j]){
                    System.out.print(arr1[i]+" ");
                }
            }
        }
    }

    public static void displayArray(int arr[] ,int len) {
        for(int i=0;i<len;i++){
            System.out.print(arr[i]+" ");
        }
        
    }
}
