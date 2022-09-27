public class App{

    public static class Pair{
        int max;
        int min;
    }
    public static void main(String[] args) {

        int arr[] = {1,2,0,4,54,6};
        System.out.println(arr[5]);
        int len = arr.length;
        System.out.println(len);


        Pair minmax = get_minimum_maximum(arr, len);
        System.out.println("Maximum : " + minmax.max);
        System.out.println("Minimum : " + minmax.min);


        
    }

    public static Pair get_minimum_maximum(int arr[],int len){
        Pair minmax = new Pair();

        minmax.min =arr[0];
        minmax.max =arr[0];

        for(int i=0 ;i<len ;i++){
            if(arr[i]>minmax.max)
                minmax.max = arr[i];
            if(arr[i]<minmax.min)
                minmax.min=arr[i];        
        }
        
        return minmax;
    }
}