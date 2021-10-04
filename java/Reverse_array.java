import java.util.Arrays;
import java.util.Scanner;

public class Reverse_array {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        System.out.println("Enter the length of array:");
        int n = in.nextInt();
        int[] arr = new int[n];
        System.out.println("Enter the array elements: ");
        for (int i = 0; i < arr.length; i++) {
            arr[i]= in.nextInt();
        }
        swap(arr);
        System.out.println("The reversed array is: ");
        System.out.println(Arrays.toString(arr));
    }

    private static void swap(int[] arr) {
        int s=0,e=arr.length-1;
        while(s<e){
            int temp=arr[s];
            arr[s]=arr[e];
            arr[e]=temp;
            e--;s++;
        }
    }
}