
//  time complexity -0(n)
// space complexity =0(1)


public class App {
    public static void main(String[] args) {

        int arr[]={7,5,-13,5,10,-2,5};
        int max=0;
        int max_till_here=0;

        for(int i=0;i<arr.length;i++){
            max_till_here+=arr[i];
            if(max_till_here>max)
                max=max_till_here;
            if(max_till_here<0)
                max_till_here=0;
        }
        System.out.println(max);
    }
    
}

